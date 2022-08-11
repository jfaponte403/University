#include <iostream>

using namespace std;

class Persona{
private:
    string nom;
    int id, peso, edad;
public:
    void salida();
    void setName(string);
    string getName();
    int getId();
    void setId(int);
    int getPeso();
    void setPeso(int);
    int getEdad();
    void setEdad(int);
};

void Persona::setEdad(int newEdad) {
    this->edad = newEdad;
}

int Persona::getEdad() {
    return this->edad;
}

void Persona::setPeso(int newPeso) {
    this->peso = newPeso;
}

int Persona::getPeso() {
    return this->peso;
}

void Persona::setId(int newId) {
    this->id = newId;
}

int Persona::getId() {
    return this->id;
}

void Persona::setName(string newNom) {
    this->nom = newNom;
}

string Persona::getName() {
    return this->nom;
}

void Persona::salida() {
    cout << "Nombre: " << nom << endl;
    cout << "id: " << id << endl;
    cout << "peso: " << peso << endl;
    cout << "edad: " << edad << endl;
}

//Hereda de Persona
class Trabajador:public Persona{
private:
    long sueldo, salario;
public:
    void mostrarTrab();

    void setSueldo(long x);
    void setSalario(long x);
    long getSueldo();
    long getSalario();
};

void Trabajador::mostrarTrab() {
    cout << "Sueldo: " << sueldo << endl;
    cout << "Salario: " << salario << endl;
}

void Trabajador::setSueldo(long x) {
    this->sueldo = x;
}

long Trabajador::getSueldo() {
    return this->sueldo;
}

void Trabajador::setSalario(long x) {
    this->salario = x;
}

long Trabajador::getSalario() {
    return this->salario;
}

//Hereda de Trabajador
class Operario:public Trabajador{
private:
    int extraHour;
public:
    void getDataOp();
    void processOp();
    void printResult();
};

void Operario::getDataOp() {
    string name;
    int id, peso, edad, opc = 0;
    cout << "Ingrese el nombre del Operario \n";
    cin >> name;
    setName(name);

    cout << "Ingrese el id del Operario \n";
    cin >> id;
    setId(id);

    cout << "Ingrese el peso del Operario \n";
    cin >> peso;
    setPeso(peso);

    cout << "Ingrese la edad del Operario \n";
    cin >> edad;
    setEdad(edad);

    cout << "Si el operario trabajo horas extra presiona 1, sino otro numero \n";
    cin >> opc;
    if (opc == 1){
        cout << "Ingrese la cantidad de horas extras trabajadas \n";
        cin >> extraHour;
    }
}

void Operario::processOp() {
    long month = 1000000;
    long Week = month / 30;
    long hour = Week / 8;
    long moneyForExtraHour = ((hour * 0.25) + hour) * extraHour;
    long sueldo = 1000000;
    long salario = 0;
    salario = sueldo - ((sueldo * 0.16) + (sueldo * 0.125) + (sueldo * 0.0522) + (sueldo * 0.02)) + moneyForExtraHour;

    setSalario(salario);
    setSueldo(sueldo);
}

void Operario::printResult() {
    cout << "\nOPERARIO\n";
    salida();
    processOp();
    mostrarTrab();
}

//Hereda de Trabajador
class Vendedor:public Trabajador{
private:
    int unitsSell;
public:
    void getDataVen();
    void processVen();
    void printResultVen();
};

void Vendedor::getDataVen() {
    string name;
    int id, peso, edad;
    cout << "Ingrese el nombre del vendedor \n";
    cin >> name;
    setName(name);

    cout << "Ingrese el id del vendedor \n";
    cin >> id;
    setId(id);

    cout << "Ingrese el peso del vendedor \n";
    cin >> peso;
    setPeso(peso);

    cout << "Ingrese la edad del vendedor \n";
    cin >> edad;
    setEdad(edad);

    cout << "Ingrese la cantidad de unidades vendidas por el vendedor \n";
    cin >> unitsSell;
}

void Vendedor::processVen() {
    long extraMoney = (500000 * 0.03) * unitsSell;
    long sueldo = 1000000, salario;
    salario = sueldo + extraMoney - ((sueldo * 0.16) + (sueldo * 0.125) + (sueldo * 0.0522) + (sueldo * 0.02));

    setSalario(salario);
    setSueldo(sueldo);
}

void Vendedor::printResultVen() {
    cout << "\nVENDEDOR\n";
    salida();
    processVen();
    mostrarTrab();
}

//Hereda de Trabajador
class Gerente:public Trabajador{
private:
public:
    void getDataGerente();
    void processGerente();
    void printResultGerente();
};

void Gerente::getDataGerente() {
    string name;
    int id, peso, edad;
    cout << "Ingrese el nombre del Gerente \n";
    cin >> name;
    setName(name);

    cout << "Ingrese el id del Gerente \n";
    cin >> id;
    setId(id);

    cout << "Ingrese el peso del Gerente \n";
    cin >> peso;
    setPeso(peso);

    cout << "Ingrese la edad del Gerente \n";
    cin >> edad;
    setEdad(edad);
}

void Gerente::processGerente() {
    long sueldo = 3500000, salario;
    salario = sueldo - ((sueldo * 0.16) + (sueldo * 0.125) + (sueldo * 0.0522) + (sueldo * 0.02));

    setSalario(salario);
    setSueldo(sueldo);
}

void Gerente::printResultGerente() {
    cout << "\nGERENTE\n";
    salida();
    processGerente();
    mostrarTrab();
}

class Estudiante:public Persona{
private:
    int cod;
    float nota;
public:
    void setCod(int);
    void setNota(float);
    void setProm(float);

    int getCode();
    float getNote();
};

void Estudiante::setCod(int x) {
    this->cod = x;
}

void Estudiante::setNota(float x) {
    this->nota = x;
}

int Estudiante::getCode(){
    return this->cod;
}

float Estudiante::getNote(){
    return this->cod;
}

class J:public Estudiante{
private:
public:
    void getDataJ();
    void printJ();
};

void J::getDataJ() {
    string name;
    int id, peso, edad, code;
    float note;

    cout << "Ingrese el nombre del estudiante \n";
    cin >> name;
    setName(name);

    cout << "Ingrese el id del estudiante \n";
    cin >> id;
    setId(id);

    cout << "Ingrese el peso del estudiante \n";
    cin >> peso;
    setPeso(peso);

    cout << "Ingrese la edad del estudiante \n";
    cin >> edad;
    setEdad(edad);

    cout << "Ingrese el codigo del estudiante \n";
    cin >> code;
    setCod(code);

    cout << "Ingrese la nota del estudiante \n";
    cin >> note;
    setNota(note);
}

void J::printJ() {
    cout << "\nESTUDIANTE\n";
    salida();
    cout << "Codigo: " << getCode() << endl;
    cout << "Nota: " << getNote() << endl;
}

int main(){

    Operario cero;
    cero.getDataOp();
    cero.printResult();

    Vendedor uno;
    uno.getDataVen();
    uno.printResultVen();

    Gerente dos;
    dos.getDataGerente();
    dos.printResultGerente();

    J tres;
    tres.getDataJ();
    tres.printJ();
    return 0;
}