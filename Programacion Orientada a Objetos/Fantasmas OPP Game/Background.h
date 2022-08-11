class Background{
	public:
	//variables	
	float x;
	float y;
	BITMAP* sprite;
	string background;
	//Fuciones
	Background(string background);
	void action();
};

Background::Background(string background){
	sprite = load_bitmap(background.c_str(),NULL);
	this->background = background;
	this->x = 0;
	this->y = 0;
}

void Background::action(){
    draw_sprite(lienzo,sprite,x,y);
}
