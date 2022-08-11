#include <iostream>

using namespace std;

//Area y perimetro global.
//Rectangulo - Cuadrado - Triangulo.

class Cuadrado;
class Rectangulo;
class Triangulo;

class Cuadrado {
    private:
        int sideX, sideY;
    public:
        void getSide();
        friend void area(Cuadrado, Rectangulo, Triangulo);
        friend void perimetro(Cuadrado, Rectangulo, Triangulo);
};

void Cuadrado::getSide() {
    cout << "Ingrese el largo del cuadrado \n";
    cin >> sideX;
    sideY = sideX;
}

class Rectangulo {
private:
    int sideX, sideY;
public:
    void getSide();
    friend void area(Cuadrado, Rectangulo, Triangulo);
    friend void perimetro(Cuadrado, Rectangulo, Triangulo);
};

void Rectangulo::getSide() {
    cout << "Ingrese el largo del rectangulo \n";
    cin >> sideX;
    cout << "Ingrese el ancho del rectangulo \n";
    cin >> sideY;
}

class Triangulo {
private:
    int sideX, sideY, sideZ, sideZ0;
public:
    void getSide();
    friend void area(Cuadrado, Rectangulo, Triangulo);
    friend void perimetro(Cuadrado, Rectangulo, Triangulo);
};

void Triangulo::getSide() {
    cout << "Ingrese la base del triangulo \n";
    cin >> sideX;
    cout << "Ingrese la altura del triangulo \n";
    cin >> sideY;
    cout << "Ingrese el lado 1 del triangulo \n";
    cin >> sideZ;
    cout << "Ingrese el lado 2 del triangulo \n";
    cin >> sideZ0;
}

void area(Cuadrado c, Rectangulo r, Triangulo t){
    cout << "El area del cuadrado es: " << c.sideX * c.sideX << "m2" <<  endl;
    cout << "El area del rectangulo es: " << r.sideX * r.sideY << "m2" << endl;
    cout << "El area del Triangulo es: " << (t.sideX * t.sideY) / 2 << "m2" << endl;
}
void perimetro(Cuadrado c, Rectangulo r, Triangulo t){
    cout << "El perimetro del cuadrado es: " << c.sideX * c.sideX << endl;
    cout << "El perimetro del rectangulo es: " << (r.sideX * 2) + (r.sideY * 2) << endl;
    cout << "El perimetro del Triangulo es: " << t.sideX + t.sideZ + t.sideZ0 << endl;
}

int main() {
    Cuadrado square;
    Triangulo Triangle;
    Rectangulo Rectangle;

    square.getSide();
    Triangle.getSide();
    Rectangle.getSide();

    area(square, Rectangle, Triangle);
    perimetro(square, Rectangle, Triangle);
    return 0;
}
