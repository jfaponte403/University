#include <iostream>
#include "Estudiante.h"

using namespace std;

class ListaCircularDoble {
public:
    Estudiante *cab;
    ListaCircularDoble();
    void insertar(Estudiante *&);
    void mostrarLista();
    void mostrarNotas(int);
    void eliminar(int);
    void modificarLista(int);
    void modificarElementoLista(Estudiante *&);
    void modificarNotasLista(Estudiante *&);
};

ListaCircularDoble::ListaCircularDoble() {
    this->cab = NULL;
}

void ListaCircularDoble::insertar(Estudiante *&nuevo) {
    if(nuevo != NULL){
        if (cab != NULL){
            Estudiante *aux = cab->ant;
            aux->sig = nuevo;
            nuevo->ant = aux;
            nuevo->sig = cab;
            cab->ant = nuevo;
        } else {
            cab = nuevo;
            cab->sig = cab;
            cab->ant = cab;
            cout << "creo cabeza \n";
        }
    } else {
        cout << "No existen estudiantes \n";
    }
}

void ListaCircularDoble::mostrarLista() {
    if (cab != NULL){
        Estudiante *aux = cab;
        while (aux->sig != cab){
            aux->mostrarEstudiante();
            aux = aux->sig;
        }
        aux->mostrarEstudiante();
    } else {
        cout << "No existen datos de estudiantes \n";
    }
}

void ListaCircularDoble::mostrarNotas(int code) {
    if(cab != NULL){
        Estudiante *aux = cab;
        while (aux->cod != code){
            aux = aux->sig;
        }
        aux->mostrarNotas();
    } else {
        cout << "No hay datos. \n";
    }
}

void ListaCircularDoble::eliminar(int code){
    Estudiante *aux = cab;
    while(aux->sig != cab && aux->sig->cod != code){
        aux = aux->sig;
    }
    if (aux->sig->cod == code){
        Estudiante *elim = aux->sig;
        aux->sig = elim->sig;
        aux->sig->ant = elim->ant;

        if (elim == cab){
            cab = elim->sig;
            cab->ant = elim->ant;
        }
        /*if (aux->sig == cab){
            cab = NULL;
        }*/
        delete elim;
    }
}

void ListaCircularDoble::modificarElementoLista(Estudiante *&est){
    string newName, newCourse;
    int newCode, opc = 0;
    do {
        cout << "INGRESE LA OPCION A MODIFICAR \n";
        cout << "1. Modificar nombre \n";
        cout << "2. Modificar asignatura \n";
        cout << "3. Modificar codigo \n";
        cout << "4. Modificar notas \n";
        cout << "9. salir \n";
        cout << "digite la opcion a modificar \n";
        cin >> opc;

        switch (opc) {
            case 1:
                system("cls");
                cout << "ingrese el nuevo nombre \n";
                cin >> newName;
                est->setNombre(newName);
                break;
            case 2:
                system("cls");
                cout << "ingrese la nueva asignatura \n";
                cin >> newCourse;
                est->setAsignatura(newCourse);
                break;
            case 3:
                system("cls");
                cout << "ingrese el nuevo codigo \n";
                cin >> newCode;
                est->cod = newCode;
                break;
            case 4:
                system("cls");
                modificarNotasLista(est);
                break;
            case 9:
                system("cls");
                cout << "Finalizando.... \n";
                break;
        }

    } while (opc != 9);
}

void ListaCircularDoble::modificarNotasLista(Estudiante *&est){
    int opc = 0;
    double newNote = 00;
    do {
        est->mostrarNotas();
        cout << "INGRESE LA NOTA A MODIFICAR \n";
        cout << "9.Salir.\n\n";
        cin >> opc;

        switch (opc) {
            case 1:
                system("cls");
                cout << "Ingrese la nueva nota 1 \n";
                cin >> newNote;
                est->setDef(00);
                est->setNota(0, newNote);
                est->definitiva();
                break;
            case 2:
                system("cls");
                cout << "Ingrese la nueva nota 2 \n";
                cin >> newNote;
                est->setDef(00);
                est->setNota(1, newNote);
                est->definitiva();
                break;
            case 3:
                system("cls");
                cout << "Ingrese la nueva nota 3 \n";
                cin >> newNote;
                est->setDef(00);
                est->setNota(2, newNote);
                est->definitiva();
                break;
            case 4:
                system("cls");
                cout << "Ingrese la nueva nota 4 \n";
                cin >> newNote;
                est->setDef(00);
                est->setNota(3, newNote);
                est->definitiva();
                break;
            case 5:
                system("cls");
                cout << "Ingrese la nueva nota 5 \n";
                cin >> newNote;
                est->setDef(00);
                est->setNota(4, newNote);
                est->definitiva();
                break;
            case 9:
                system("cls");
                cout << "Finalizando.... \n";
                break;
        }

    } while (opc != 9);
}

void ListaCircularDoble::modificarLista(int code){
    if(cab != NULL){
        Estudiante *aux = cab;
        while (aux->cod != code){
            aux = aux->sig;
        }
        modificarElementoLista(aux);
    } else {
        cout << "No hay datos. \n";
    }
}