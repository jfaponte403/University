class Bala{ 
	public:
		float x;
		float y;
		int type;
		BITMAP* sprite;
		
		void mov();
		Bala(float x, float y, int type);
		~Bala();
};
list<Bala *> balas;

Bala::Bala(float x, float y, int type){
	this->x = x;
	this->y = y;
	this->sprite = type == 0?load_bitmap("bala.bmp", NULL) : load_bitmap("bala_enemiga.bmp", NULL);
	this->type = type;
}

void Bala::mov(){
	//Dibujar en pantalla
	draw_sprite(lienzo, sprite, x, y);
	//Movimiento
	switch(this->type){
		case 0:
			if (y > 0){
                y-=0.8;
            } else{
                this->~Bala();
            }
		    break;
		case 1:
			if(y < SCREEN_H){
                y+=0.8;
            } else {
                this->~Bala();
            }
		    break;
	}
}

Bala::~Bala(){
	balas.remove(this);
}

static bool alarm(int secons){
	static int cont = 0;
	if(secons == 0){
		return false;
	}
	if(cont >= secons){
		cont = 0;
		return true;
	}
	cont++;
	return false;
}
