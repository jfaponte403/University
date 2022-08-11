#include <iostream>

using namespace std;

class F;
class D;

class J {
private:
    char nom[30];
    int id;
    float nota;
public:
    void entrada();
    void proceso();
    void salida();
    friend float evaluar(J, F, D);
};

void J::entrada(){
    cout << "Nombre: " << endl;
    cin.ignore();
    cin.getline(nom, 30, '\n');

    cout << "Id: " << endl;
    cin >> id;

    cout << "Nota" << endl;
    cin >> nota;
}

void J::proceso(){
    cout << "procesando datos... \n";
}

void J::salida(){
    cout << "////\t////\t////\t////\t\n";
    cout << "Nombre: " << endl;
    cout << nom << endl;

    cout << "Id: " << endl;
    cout << id << endl;

    cout << "Nota" << endl;
    cout << nota << endl;
}

class F {
private:
    char nom[30];
    int id;
    float nota;
public:
    void entrada();
    void proceso();
    void salida();
    friend float evaluar(J, F, D);
};

void F::entrada(){
    cout << "Nombre: " << endl;
    cin.ignore();
    cin.getline(nom, 30, '\n');

    cout << "Id: " << endl;
    cin >> id;

    cout << "Nota" << endl;
    cin >> nota;
}

void F::proceso(){
    cout << "procesando datos... \n";
}

void F::salida(){
    cout << "////\t////\t////\t////\t\n";
    cout << "Nombre: " << endl;
    cout << nom << endl;

    cout << "Id: " << endl;
    cout << id << endl;

    cout << "Nota" << endl;
    cout << nota << endl;
}

class D {
private:
    char nom[30];
    int id;
    float nota;
public:
    void entrada();
    void proceso();
    void salida();
    friend float evaluar(J, F, D);
};

float evaluar(J x, F y, D z){
    float prom = 0.0;
    prom = (x.nota + y.nota + z.nota) / 3;
    return prom;    
}

void D::entrada(){
    cout << "Nombre: " << endl;
    cin.ignore();
    cin.getline(nom, 30, '\n');

    cout << "Id: " << endl;
    cin >> id;

    cout << "Nota" << endl;
    cin >> nota;
}

void D::proceso(){
    cout << "procesando datos... \n";
}

void D::salida(){
    cout << "////\t////\t////\t////\t\n";
    cout << "Nombre: " << endl;
    cout << nom << endl;

    cout << "Id: " << endl;
    cout << id << endl;

    cout << "Nota" << endl;
    cout << nota << endl;
}

int main(){

    J uno;
    F dos;
    D tres;

    uno.entrada();
    dos.entrada();
    tres.entrada();

    uno.proceso();
    dos.proceso();
    tres.proceso();

    uno.salida();
    dos.salida();
    tres.salida();

    cout << "promedio = " << evaluar(uno, dos, tres) << endl;
    return 0;
}