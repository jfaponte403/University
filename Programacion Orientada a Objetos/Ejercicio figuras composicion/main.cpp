#include <iostream>

using namespace std;

//Area y perimetro global.
//Rectangulo - Cuadrado - Triangulo.

class Cuadrado {
    private:
        int sideX, area, perimetro;
    public:
        void getSide();
        void process();
        void printResult();
};

void Cuadrado::getSide() {
    cout << "Ingrese el largo del cuadrado \n";
    cin >> sideX;
}

void Cuadrado::process() {
    area = sideX * sideX;
    perimetro = sideX * 4;
}

void Cuadrado::printResult() {
    cout << "El area del cuadrado es: " << area << "m2" << endl;
    cout << "El perimetro del cuadrado es: " << perimetro << "m" << endl;
}

class Rectangulo {
    private:
        int sideX, sideY, area, perimetro;
    public:
        void getSide();
        void process();
        void printResult();
};

void Rectangulo::getSide() {
    cout << "Ingrese la base del rectangulo \n";
    cin >> sideX;

    cout << "Ingrese el ancho del rectangulo \n";
    cin >> sideY;
}

void Rectangulo::process() {
    area = sideX * sideY;
    perimetro = (sideX * 2) + (sideY * 2);
}

void Rectangulo::printResult() {
    cout << "El area del Rectangulo es: " << area << "m2" << endl;
    cout << "El perimetro del Rectangulo es: " << perimetro << "m" << endl;
}

class Triangulo {
private:
    int base, heihgt, sideX, sideY, area, perimetro;
public:
    void getSide();
    void process();
    void printResult();
};

void Triangulo::getSide() {
    cout << "Ingrese la base del triangulo \n";
    cin >> base;

    cout << "Ingrese la altura del triangulo \n";
    cin >> heihgt;

    cout << "Ingrese el lado 1 del triangulo \n";
    cin >> sideX;

    cout << "Ingrese el lado 2 del triangulo \n";
    cin >> sideY;
}

void Triangulo::process() {
    area = (base * heihgt) / 2;
    perimetro = base + sideY + sideX;
}

void Triangulo::printResult() {
    cout << "El area del Triangulo es: " << area << "m2" << endl;
    cout << "El perimetro del Triangulo es: " << perimetro << "m" << endl;
}

class Figura{
private:
    Cuadrado square;
    Triangulo Triangle;
    Rectangulo Rectangle;
public:
    void getData();
    void process();
    void printAll();
};

void Figura::getData() {
    square.getSide();
    Triangle.getSide();
    Rectangle.getSide();
}

void Figura::process() {
    square.process();
    Triangle.process();
    Rectangle.process();
}

void Figura::printAll() {
    square.printResult();
    Triangle.printResult();
    Rectangle.printResult();
}

int main() {
    Figura todas;
    todas.getData();
    todas.process();
    todas.printAll();

    return 0;
}
