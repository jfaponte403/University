#include <iostream>

using namespace std;

class Estudiante{
private:
    string nombre;
    string asignatura;
    double nota[5];
    double def;
public:
    double pond[5];
    int cod;
    Estudiante *sig;

    Estudiante();
    Estudiante(int cod, string nombre, string asignatura);

    void setNombre(string);
    void setAsignatura(string);
    void setNotas(double, double, double, double, double);
    void setNota(int, double);
    void setDef(double x);
    double getNota(int);

    void mostrarNotas();
    void mostrarNotasPonderadas();
    void mostrarEstudiante();
    double definitiva();
};

Estudiante::Estudiante(){
    this->nombre = "";
    this->asignatura = "";
    for(int i = 0; i < 5; i++){
        nota[i] = 0.0;
        pond[i] = 0.0;
    }
    this->cod = 0;
    this->def = 0.0;
    this->sig = NULL;
}

Estudiante::Estudiante(int cod, string nombre, string asignatura){
    this->nombre = nombre;
    this->asignatura = asignatura;
    for(int i = 0; i < 5; i++){
        nota[i] = 0.0;
    }
    this->pond[0] = 0.1;
    this->pond[1] = 0.1;
    this->pond[2] = 0.15;
    this->pond[3] = 0.15;
    this->pond[4] = 0.5;
    this->def = 0.0;
    this->cod = cod;
    this->sig = NULL;
}

void Estudiante::setNotas(double n1, double n2, double n3, double n4, double n5){
    this->nota[0] = n1;
    this->nota[1] = n2;
    this->nota[2] = n3;
    this->nota[3] = n4;
    this->nota[4] = n5;
}

void Estudiante::setNota(int ind, double n){
    this->nota[ind] = n;
}

double Estudiante::getNota(int ind){
    return this->nota[ind];
}

void Estudiante::mostrarNotas(){
    cout << "ID\tNOTA\tPORCENTAJE\tNOTA PONDERADA\t" << endl;
    for(int i = 0; i < 5; i++){
        cout << i+1 << "\t" << nota[i] << "\t"<< pond[i] <<"\t\t" << nota[i] * pond[i] << endl;
    }
}

void Estudiante::mostrarNotasPonderadas(){
    for(int i = 0; i < 5; i++){
        cout << "Nota " << i+1 << " ponderada: "<< nota[i] * pond[i] << endl;
    }
}

double Estudiante::definitiva(){
    for(int i = 0; i < 5; i++){
        this->def += nota[i] * pond[i];
    }
    return this->def;
}

void Estudiante::mostrarEstudiante(){
    cout << this->cod << "\t" << this->nombre << "\t" << this->asignatura << "\t\t" << this->def << endl;
}

void Estudiante::setNombre(string name){
    this->nombre = name;
}

void Estudiante::setAsignatura(string course){
    this->asignatura = course;
}

void Estudiante::setDef(double x){
    this->def = x;
}