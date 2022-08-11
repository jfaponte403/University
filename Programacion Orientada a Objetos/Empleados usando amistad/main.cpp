/*

long salario = 1000000;
long salarioPorDia = salario / 30;
long salarioPorHora = salarioPorHora / 8;

*/

#include <iostream>

using namespace std;

class Operario;
class Gerente;
class Vendedor;

class Operario {
private:
    char nombre[30];
    int id, extraHour;
    long sueldo, salario;
public:
    void captura();
    void calcular();
    void imprimir();
    long getSalario();
    friend long promedio(Operario, Vendedor, Gerente);
};

void Operario::captura(){
    int res = 0;
    cout << "Ingrese el nombre del OPERARIO \n";
    cin.getline(nombre, 30, '\n');

    cout << "Ingrese el Id del Operario \n";
    cin >> id;

    cout << "El operario trabajo horas extra? 1 = SI, Otro numero = NO \n";
    cin >> res;

    if (res == 1){
        cout << "Indique la cantidad de horas extra trabajas por el operario \n";
        cin >> extraHour;
        while (extraHour < 0 || extraHour > 41){
            cout << "Ingrese una cantidad valida de horas \n";
            cin >> extraHour;
        }
    }
}

void Operario::calcular(){

    long mounth = 1000000;
    long Week = mounth / 30;
    long hour = Week / 8;

    long moneyForExtraHour = ((hour * 0.25) + hour) * extraHour;
    sueldo = 1000000;
    salario = sueldo - ((sueldo * 0.16) + (sueldo * 0.125) + (sueldo * 0.0522) + (sueldo * 0.02)) + moneyForExtraHour;
}

void Operario::imprimir(){
    cout << "||\tOPERARIO\t|| \n";
    cout << "Nombre: " << nombre << endl;
    cout << "Id: " << id << endl;
    cout << "Sueldo: " << sueldo << endl;
    cout << "Salario: " << salario << endl;
    cout << endl;
}

class Gerente {
private:
    char nombre[30];
    int id;
    long sueldo, salario;
public:
    void captura();
    void calcular();
    void imprimir();
    long getSalario();
    friend long promedio(Operario, Vendedor, Gerente);
};

void Gerente::captura(){
    cout << "Ingrese el nombre del GERENTE \n";
    cin.ignore();
    cin.getline(nombre, 30, '\n');

    cout << "Ingrese el Id del Operario \n";
    cin >> id;
}

void Gerente::calcular(){
    sueldo = 3500000;
    salario = sueldo - ((sueldo * 0.16) + (sueldo * 0.125) + (sueldo * 0.0522) + (sueldo * 0.02));
}

void Gerente::imprimir(){
    cout << "||\tGerente\t|| \n";
    cout << "Nombre: " << nombre << endl;
    cout << "Id: " << id << endl;
    cout << "Sueldo: " << sueldo << endl;
    cout << "Salario: " << salario << endl;
    cout << endl;
}

long promedio(Operario x, Vendedor y, Gerente z);

class Vendedor {
private:
    char nombre[30];
    int id, unitsSell;
    long sueldo, salario;
public:
    void captura();
    void calcular();
    void imprimir();
    long getSalario();
    friend long promedio(Operario, Vendedor, Gerente);
};

long promedio(Operario x, Vendedor y, Gerente z) {
    return (x.getSalario() + y.getSalario() + z.getSalario()) / 3;
}

void Vendedor::captura(){
    cout << "Ingrese el nombre del Vendedor \n";
    cin.ignore();
    cin.getline(nombre, 30, '\n');

    cout << "Ingrese el Id del Vendedor \n";
    cin >> id;

    cout << "Â¿Cuantas unidades vendio el vendedor? \n";
    cin >> unitsSell;

    while (unitsSell < 0){
        cout << "ingrese un numero correcto de unidades vendidas \n";
        cin >> unitsSell;
    }
}

void Vendedor::calcular(){
    long extraMoney = (500000 * 0.03) * unitsSell;
    sueldo = 1000000;
    salario = sueldo - ((sueldo * 0.16) + (sueldo * 0.125) + (sueldo * 0.0522) + (sueldo * 0.02)) + extraMoney;
}

void Vendedor::imprimir(){
    cout << "||\tVENDEDOR\t|| \n";
    cout << "Nombre: " << nombre << endl;
    cout << "Id: " << id << endl;
    cout << "Sueldo: " << sueldo << endl;
    cout << "Salario: " << salario << endl;
    cout << endl;
}

long Gerente::getSalario() {
    return this->salario;
}
long Operario::getSalario() {
    return this->salario;
}
long Vendedor::getSalario() {
    return this->salario;
}

class Trabajador {
private:
    Operario o;
    Gerente g;
    Vendedor v;
    long salProm;
public:
    void captura();
    void calcular();
    void imprimir();
};

void Trabajador::captura(){
    o.captura();
    g.captura();
    v.captura();
}

void Trabajador::calcular(){
    o.calcular();
    g.calcular();
    v.calcular();
}

void Trabajador::imprimir(){
    o.imprimir();
    g.imprimir();
    v.imprimir();

    cout << "El salario promedio es: " << promedio(o, v, g) << endl;
}

int main(){
    Trabajador cero;
    cero.captura();
    cero.calcular();
    cero.imprimir();

    return 0;
}