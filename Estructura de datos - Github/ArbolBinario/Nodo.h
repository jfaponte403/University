#include <iostream>

using namespace std;

class Nodo{
public:
    int id;
    Nodo *der;
    Nodo *izq;
    Nodo *padre;
    Nodo(int, string);
    string getPalabra();
    void setPalabra(string);
    void mostrar();
private:
    string palabra;
};

Nodo::Nodo(int id, string palabra){
    this->id = id;
    this->palabra = palabra;
    this->padre = NULL;
    this->der = NULL;
    this->izq = NULL;
}

string Nodo::getPalabra(){
    return this->palabra;
}

void Nodo::setPalabra(string palabra){
    this->palabra = palabra;
}

void Nodo::mostrar(){
    cout << "Id: " << this->id << " Palabra: " << this->palabra;
}
