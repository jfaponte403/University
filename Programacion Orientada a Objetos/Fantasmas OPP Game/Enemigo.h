class Enemigo: public Entidad{
	public:
		//variables
        static int points;
		int type;
		int cont;
		//funciones
		Enemigo(float x, float y, int type);
		~Enemigo();
		void action();
		void Movimiento();
		//objetos
		Alarm* alarm;
};
list<Enemigo*>Enemigos;

int Enemigo::points = 0;

Enemigo::Enemigo(float x, float y, int type){
	this->x = x;
	this->y = y;
	this->sprite = load_bitmap("Enemigo.bmp",NULL);
	this->b_vida = load_bitmap("b_vida.bmp",NULL);
	this->alarm = new Alarm[15]();
	this->type = type;
	this->cont = 1;
	this->vida = 90;
}

Enemigo::~Enemigo(){
	Enemigos.remove(this);
	destroy_bitmap(this->sprite);
	destroy_bitmap(this->b_vida);
	delete [] alarm;
}

void Enemigo::action(){
	//dibujos
	draw_sprite(lienzo,this->sprite,x,y);
	float b_tam = (50.0/100.0) * vida; // tama�o de la barra de vida
	stretch_sprite(lienzo,b_vida,x,y,b_tam,5); // crea una barra de vida estirando una imagen
	//crear disparos enemigos
	if(this->alarm[1].alarm(190)){	
		balas.push_back(new Bala(x+(sprite->w/2)-3,y,1)); // agrega una bala enemiga a la lista
	}
	//colision
	for(list<Bala*>::iterator it = balas.begin(); it != balas.end(); it++){
		Bala *b = *it;
		if(b->type == 0){ // si la bala es de tipo 0 (creada por el jugador)
			if(b->x >= x and b->x <= x+sprite->w and b->y >= y and b->y <= y+sprite->h)
			{
				delete b;
				this->vida-=3;	
			}	
		}
	}
	this->Movimiento();
    if(this->vida <= 0){
        points += 50;
    }
	if(this->vida <= 0 or this->x > SCREEN_W){
		delete this; // Eliminar nave enemiga si ya no tiene vida o esta fuera del lienzo
	}
}

void Enemigo::Movimiento(){
	switch(this->type){
		case 0:
			if(this->alarm[0].alarm(6)){
				x+=5;
				y+=2;
			}
		    break;
		case 1:
			if(this->alarm[0].alarm(2)){
				x+= 1.3;
				y+= cos(x/100);
			}
		    break;
		
		case 2:
			if(this->alarm[0].alarm(2)){
				x+= 1.5;
				if(this->y >= SCREEN_H - (SCREEN_H/3)){
                    cont = -1;
                }
				if(cont == -1){
					y+= pow((x-(this->x - SCREEN_H/4))/100,2) * cont;
				}else{
					y+= pow(x/100,2);	
				}
			}
		    break;
	} 
}


