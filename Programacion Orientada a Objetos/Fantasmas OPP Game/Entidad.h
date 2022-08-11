using namespace std;

class Entidad{
public:
    float x;
    float y;
    int vida;
    BITMAP* sprite;
    BITMAP* b_vida;
    Entidad();
};

Entidad::Entidad() {
    x = 0;
    y = 0;
    vida = 0;
    sprite = NULL;
    b_vida = NULL;
}