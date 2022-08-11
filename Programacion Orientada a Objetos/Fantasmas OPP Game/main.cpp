/*
********************************************************
****       Jhonattan Aponte - 20212578062 Gr303     ****
****       David Casallas - 20212578047 Gr303       ****
****              Juego Fantasmas					****
********************************************************
*/

#include <allegro.h>
#include <iostream>
#include <fstream>

using namespace std;

#include <list>
#include <math.h>
#include <string>
#include <time.h>

BITMAP *lienzo;
MIDI *musica;

#include "Entidad.h"
#include "Alarm.h"
#include "Bala.h"
#include "Personaje.h"
#include "Enemigo.h"
#include "Background.h"


Alarm *Timer = new Alarm(); 

void init();
void deinit();
void crear();
void Enemigo_action();
char* leerDatos(int x, int y, int color, int max, FONT *font);

string getDate(){
   time_t t = time(NULL);
   struct tm tiempoLocal = *localtime(&t);
   char fechaHora[70];
   char *formato = "%Y-%m-%d-%H:%M:%S";
   int bytesEscritos = strftime(fechaHora, sizeof fechaHora, formato, &tiempoLocal);
   if (bytesEscritos != 0){
      return fechaHora;
   }
   return "ERROR";
}


int main(){
	init();
	FONT *fuente = load_font("minecraft.pcx", NULL, NULL);
	char *nombre = leerDatos(255, 255, 'w', 50, fuente);
    ofstream points("points.txt", ios::app);
    lienzo = create_bitmap(700, 480);
	Personaje *fantasma = new Personaje();
	Background* background = new Background("fondo.bmp");
	srand(time(NULL)); // hace que los numeros sean aleatorios
	bool vivo = true;
	play_midi(musica, 1);
	while (!key[KEY_ESC] && vivo){
        background->action(); // mostrar el fondo
		crear();
		Enemigo_action();
		textprintf(screen, fuente, 240, 485, 'f', "Puntos: %d", Enemigo::points);
		if (fantasma->vida > 0){
			fantasma->mov(); // mover la nave si su vida es mayor a 0
		}
		draw_sprite(screen, lienzo ,0 ,0);
		clear_to_color(lienzo, 0x000000);
		if(fantasma->vida <= 0){
			vivo = false;
		}
	}
    // Imprime el puntaje en el archivo points.txt con fecha y hora
    points << "Nombre: " << nombre << " Puntaje: " << Enemigo::points << " Realizado el " << getDate() << endl;
	points.close();
	deinit();
	return 0;
}
END_OF_MAIN();

char* leerDatos(int x, int y, int color, int max, FONT *font){
	char it;
	char* cadena;
	
	int i = 0;
	textprintf(screen, font, x-150, y-80, color, "Ingrese su nombre:");
	do{
		it=readkey();
		if(it>='a' && it<='z'){
			textprintf(screen, font, x+25*i, y, color, "%c", it);
			cadena[i] =it;
			cadena[i+1] = '\0';
			i++;
		}
	}while(it != 13 && i < max);
	return cadena;
}


void crear(){
	static int cont = 0; // cuenta los enemigos que se crean
	static int type = rand()%3; // crea un numero aleatorio entre el 0 y 2
	
	if(cont < 6){
		if(Timer->alarm(180)){
			Enemigos.push_back(new Enemigo(-80, 15, type)); // crear un enemigo random
			cont++;	
		}
	}else{
		if(Timer->alarm(320)){
			cont = 0; //reinicia el contador
			type = rand()%3;
		}
	}
	
}


void Enemigo_action(){
	for(list<Enemigo*>::iterator it = Enemigos.begin(); it != Enemigos.end(); it++){
		Enemigo *b = *it;
		b->action();
	}
}

void init() {
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 530, 0, 0);
	if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}

	install_timer();
	install_keyboard();
	install_mouse();
	/* add other initializations here */
	if (install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, NULL) != 0) {
       allegro_message("Error: inicializando sistema de sonido\n%s\n", allegro_error);
    }
	set_volume(70, 70);
	musica = load_midi("musica.mid");
}

void deinit() {
	clear_keybuf();
	/* add other deinitializations here */
}
