class Personaje: public Entidad{
public:
		float vel;
		void mov();
		Personaje();
};

Personaje::Personaje(){
	x = 200;
	y = 400;
	this->sprite = load_bitmap("nave.bmp", NULL);
	this->b_vida = load_bitmap("b_vida.bmp", NULL);
	vel = 3;
	vida = 200;
}

void Personaje::mov(){
	//Dibujo en el lienzo
	draw_sprite(lienzo, sprite, x, y);
	float b_tam = (50.0/100.0) * vida; // tama�o de la barra de vida
	stretch_sprite(lienzo, b_vida, x, y+sprite->h/2, b_tam, 5); // crea una barra de vida estirando una imagen
	
	if(key[KEY_SPACE] and alarm(3))	{
		balas.push_back(new Bala(x + (sprite->w/2) -3 , y, 0)); // agrega una bala a la lista
	}	
	
	for(list<Bala*>::iterator it = balas.begin(); it != balas.end(); it++){
		Bala *b = *it;
		b->mov();
	}
	
	//colision
	for(list<Bala*>::iterator it = balas.begin(); it != balas.end(); it++){
		Bala *b = *it;
		if(b->type == 1){ // si la bala es de tipo 1 (creada por el enemigo)
			if(b->x >= x and b->x <= x+sprite->w and b->y >= y and b->y <= y+sprite->h){
				delete b;
				this->vida-=3;	
			}	
		}
	}
	
	if(key[KEY_RIGHT]){
		x+=vel;
	}
	if(key[KEY_LEFT]){
		x-=vel;
	}
	if(key[KEY_UP]){
		y-=vel;
	}
	if(key[KEY_DOWN]){
		y+=vel;
	}
}

