#include "allegro.h"
#include <cstdlib>

#define MAXFILAS 20
#define NAXCOLS 31

BITMAP *buffer;
BITMAP *roca;
BITMAP *pacbnp;
BITMAP *pacman;
BITMAP *comida;
BITMAP *muertebmp;

int dir = 4;
int px = 30*14, py = 30*17;
int anteriorpx , anteriorpy;

char mapa[MAXFILAS][NAXCOLS] = {
	"XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
	"X|ooo|ooooo|XXXXX|ooooo|ooooX",
	"XoXXXoXXXXXoXXXXXoXXXXXoXXXoX",
	"XoXXXoXXXXXoXXXXXoXXXXXoXXXoX",
	"X|ooo|oo|oo|ooooo|ooooo|ooooX",
	"XoXXXoXXoXXXXXXXXXXXoXXoXXXoX",
	"X|ooo|XX|ooo|XXX|ooo|XX|ooo|X",
	"XoXXXoXXXXXXoXXXoXXXXXXoXXXoX",
	"XoXXXoXX|ooooooooooo|XXoXXXoX",
	"o|ooo|XXoXXXXXXXXXXXoXX|ooo|o",
	"XoXXXoXXoXXXXXXXXXXXoXXoXXXoX",
	"XoXXXoXX|ooooooooooo|XXoXXXoX",
	"XoXXXoXXXXXX|XXX|XXXXXXoXXXoX",
	"X|ooo|XX|ooo|XXX|ooo|XX|ooo|X",
	"XoXXXoXX|XXXXXXXXXXX|XXoXXXoX",
	"XoXXX|ooooooooooooooooo|XXXoX",
	"XoXXXoXXXX|XXXXXXXX|XXXoXXXoX",
	"XoXXXoXXXXooooooooooXXXoXXXoX",
	"X|ooo|oooo|XXXXXXXX|ooo|ooo|X",
	"XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",	
};

void dibujar_mapa(){
	int row, col;
	for(row = 0; row < MAXFILAS; row++){
		for(col = 0; col < NAXCOLS; col++){
			if(mapa[row][col] == 'X'){
				draw_sprite(buffer, roca, col*30, row*30);
			}else if(mapa[row][col] == 'o'){
				draw_sprite(buffer, comida, col*30, row*30);
				if(py/30 == row && px/30 == col){
					mapa[row][col] = ' ';
				}
			}
		}
	}
}

void pantalla(){
	blit(buffer, screen, 0, 0, 0, 0, 880, 600);
}

void dibujar_personaje(){
	blit(pacbnp, pacman, dir*33, 0, 0, 0, 33, 33);
	draw_sprite(buffer, pacman, px, py);
}

bool game_over(){
	for(int row = 0; row < MAXFILAS; row++){
		for(int col = 0; col < NAXCOLS; col++){
			if(mapa[row][col] == 'o'){
				return true;
			}	
		}
	}
	return false;

}

class Fantasma{
	BITMAP *enemigobmp;
	BITMAP *enemigo;
	int fdir;
	int _x, _y;
	public:
		Fantasma(int x, int y);
		void dibujar_fantasma() const;
		void mover_fantasma();
		void choque_pacman();
};

Fantasma::Fantasma(int x, int y){
	this->_x = x;
	this->_y = y;
	this->fdir = rand()%4;
	enemigo = create_bitmap(30, 30);
	enemigobmp = load_bitmap("enemigo.bmp", NULL);
}

void Fantasma::dibujar_fantasma() const{
	blit(enemigobmp, enemigo, 0, 0, 0, 0, 33, 33);
	draw_sprite(buffer, enemigo, _x, _y);		
}

void Fantasma::choque_pacman(){
	if(py == _y && px == _x || _y == anteriorpy && _x == anteriorpx){
		for(int i = 0; i <= 5; i++){
			clear(pacman);
			clear(buffer);
			dibujar_mapa();
			
			blit(muertebmp, pacman, i*33, 0, 0, 0, 33, 33);
			draw_sprite(buffer, pacman, px, py);
			pantalla();
			rest(80);
		}
		
		px = 30*14;
		py = 30*17;
		dir = 4;
	}
}

void Fantasma::mover_fantasma(){
	dibujar_fantasma();
	choque_pacman();
	
	if(mapa[_y/30][_x/30] == '|'){
		fdir = rand()%4;
	}
	
	if(fdir == 0){
		if(mapa[_y/30][(_x-30)/30] != 'X'){
			_x-=30;
		}else{
			fdir = rand()%4;
		}
	}
	if(fdir == 1){
		if(mapa[_y/30][(_x+30)/30] != 'X'){
			_x+=30;
		}else{
			fdir = rand()%4;
		}
	}
	if(fdir == 2){
		if(mapa[(_y-30)/30][(_x/30)] != 'X'){
			_y-=30;
		}else{
			fdir = rand()%4;
		}
	}
	if(fdir == 3){
		if(mapa[(_y+30)/30][(_x/30)] != 'X'){
			_y+=30;
		}else{
			fdir = rand()%4;
		}
	}
	if(_x <= -30){
		_x = 870;
	}else if(_x >= 870){
		_x = -30;
	}
}

int main() {
	/*
	allegro_init();
    
    set_color_depth(32);
    
    buffer = create_bitmap(880, 600);
    */
    
    allegro_init();
	install_keyboard();
	
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 880, 600, 0, 0);
	
	buffer = create_bitmap(880,600);
	roca = load_bitmap("roca.bmp", NULL);
	pacbnp = load_bitmap("pacman.bmp", NULL);
	pacman = create_bitmap(33,33);
	comida = load_bitmap("Comida.bmp", NULL);
	muertebmp = load_bitmap("muerte.bmp", NULL);	
	
	Fantasma A(30*2, 30*3);
	Fantasma B(30*8, 30*9);
	Fantasma C(30*12, 30*15);
	Fantasma D(30*12, 30*20);
	Fantasma E(30*15, 30*15);
	
	
	while(!key[KEY_ESC] && game_over()){
		anteriorpx = px;
		anteriorpy = py;
		
		if(key[KEY_RIGHT]){
			dir = 1;
		} else if (key[KEY_LEFT]) {
			dir = 0;
		} else if (key[KEY_UP]) {
			dir = 2;
		}else if (key[KEY_DOWN]) {
			dir = 3;
		}
		
		if(dir == 0){
			if(mapa[py/30][(px-30)/30] != 'X'){
				px -= 30;				
			}else{
				dir = 4;
			}

		} 
		if(dir == 1){
			if(mapa[py/30][(px+30)/30] != 'X'){
				px += 30;				
			}else{
				dir = 4;
			}

		}
		if(dir == 2){
			if(mapa[(py-30)/30][(px)/30] != 'X'){
				py -= 30;	
			}else{
				dir = 4;
			}
		}
		if(dir == 3){
			if(mapa[(py+30)/30][(px)/30] != 'X'){
				py += 30;	
			}else{
				dir = 4;
			}		
		}
		
		if(px <= -30){
			px = 870;
		}else if(px >= 870){
			px = -30;
		}
		
		clear(buffer);
		dibujar_mapa();
		dibujar_personaje();
		A.mover_fantasma();
		B.mover_fantasma();
		C.mover_fantasma();
		D.mover_fantasma();
		E.mover_fantasma();
		pantalla();
		rest(70);
		textprintf(screen, font, 550, 480, 'f', "Puntos: %d", "Hello");
		clear(pacman);
		blit(pacbnp, pacman, 4*33, 0, 0, 0, 33, 33);
		draw_sprite(buffer, pacman, px, py);
		pantalla();
		rest(90);
	}
}
END_OF_MAIN();


/*
#include <allegro.h>

void init();
void deinit();

int main() {
	init();

	while (!key[KEY_ESC]) {
		clear_to_color(screen, makecol(255,255,255));
		 put your code here 
	}

	deinit();
	return 0;
}
END_OF_MAIN()

void init() {
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
	if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}

	install_timer();
	install_keyboard();
	install_mouse();
	 add other initializations here 
}

void deinit() {
	clear_keybuf();
	 add other deinitializations here 
}
*/ 

