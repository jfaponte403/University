#include <iostream>

using namespace std;

class Producto{
private:
    int id_p;
    string nombre_p;
    long valor_p;
    int und_p;
    double iva_p;
public:
    Producto *sig;
    Producto();
    Producto(int id_p, string nombre_p, long valor_p, int und_p, double iva_p);
    void mostrar_p();

    int getId_p();
    void setId_p(int);
    void setValor_p(int);
    void setUnd_p(int);
    void setIva_p(double);
    void setNombre_p(string);
};

Producto::Producto(){
    this->id_p = 0;
    this->iva_p = 0;
    this->nombre_p = "";
    this->und_p = 0;
    this->valor_p = 0;
    this->sig = NULL;
}

Producto::Producto(int id_p, string nombre_p, long valor_p, int und_p, double iva_p){
    this->id_p = id_p;
    this->iva_p = iva_p;
    this->nombre_p = nombre_p;
    this->und_p = und_p;
    this->valor_p = valor_p;
    this->sig = NULL;
}

void Producto::mostrar_p(){
    cout << id_p << "\t" << nombre_p << "\t" << valor_p << "\t" << und_p << "\t\t" << iva_p << "\t\n";
}

int Producto::getId_p(){
    return id_p;
}

void Producto::setId_p(int id){
    id_p = id;
}

void Producto::setNombre_p(string name) {
    nombre_p = name;
}

void Producto::setValor_p(int value) {
    valor_p = value;
}

void Producto::setUnd_p(int unity) {
    und_p = unity;
}

void Producto::setIva_p(double newiva) {
    iva_p = newiva;
}