#include <iostream>
#include "ListaCircularDoble.h"

using namespace std;

void menu(ListaCircularDoble *&lista);
void cargarEstudiantes(ListaCircularDoble *&);
void mostrarEstudiantes(ListaCircularDoble *&);
void mostrarNotasEstudiante(ListaCircularDoble *&lista);
void crearEstudiante(ListaCircularDoble *&lista);
void eliminarEstudiante(ListaCircularDoble *&lista);
void modificarEstudinte(ListaCircularDoble *&lista);

void cargarEstudiantes(ListaCircularDoble *&lista){
    Estudiante *est1 = new Estudiante(1, "Isac Newton", "Calculo   ");
    lista->insertar(est1);

    Estudiante *est2 = new Estudiante(2, "Albert Einstein", "Fisica   ");
    lista->insertar(est2);

    Estudiante *est3 = new Estudiante(3, "Elon Musk", "Fundamentos 1");
    lista->insertar(est3);

    Estudiante *est4 = new Estudiante(4, "Karl Marx", "Economia   ");
    lista->insertar(est4);

    Estudiante *est5 = new Estudiante(5, "Bill Gates", "Programacion");
    lista->insertar(est5);

    Estudiante *est6 = new Estudiante(6, "Carl Guass ", "Algebra lineal");
    lista->insertar(est6);

    est1->setNotas(22, 35, 50, 32, 30);
    est1->setDef(00);
    est1->definitiva();

    est2->setDef(00);
    est2->setNotas(50, 50, 50, 50, 50);
    est2->definitiva();

    est3->setDef(00);
    est3->setNotas(45, 45, 50, 45, 38);
    est3->definitiva();

    est4->setDef(00);
    est4->setNotas(20, 35, 50, 50, 29);
    est4->definitiva();

    est5->setDef(00);
    est5->setNotas(45, 50, 10, 20, 27);
    est5->definitiva();

    est6->setDef(00);
    est6->setNotas(22, 35, 23, 35, 45);
    est6->definitiva();


    cout << "Estudiantes cargados satisfactoriamente \n";
}

void mostrarEstudiantes(ListaCircularDoble *&lista){
    cout << "ID\tNOMBRE\t\tASIGNATURA\t\tNOTA DEF \n";
    lista->mostrarLista();
}

void mostrarNotasEstudiante(ListaCircularDoble *&lista){
    cout << "||-----ESTUDIANTES-----||\n";
    mostrarEstudiantes(lista);
    int code = 0;
    cout << "Ingrese el codigo del estudiante para ver las notas \n";
    cin >> code;
    lista->mostrarNotas(code);
}

void crearEstudiante(ListaCircularDoble *&lista){
    int code;
    double notes[5];
    string name, course;
    cout << "Ingrese el codigo del estudiante \n";
    cin >> code;

    cout << "Ingrese el nombre del estudiante \n";
    cin >> name;

    cout << "Ingrese la asignatura del estudiante \n";
    cin >> course;

    Estudiante *newStudent = new Estudiante(code, name, course);

    for (int i = 0; i < 5; ++i) {
        cout << "ingrese la nota " << i+1 << " para: " << name << endl;
        cin >> notes[i];
    }
    newStudent->setNotas(notes[0], notes[1], notes[2], notes[3], notes[4]);
    newStudent->definitiva();
    lista->insertar(newStudent);
}

void eliminarEstudiante(ListaCircularDoble *&lista){
    cout << "||-----ESTUDIANTES-----||\n";
    mostrarEstudiantes(lista);
    int code = 0;
    cout << "Ingrese el codigo del estudiante a eliminar \n";
    cin >> code;
    lista->eliminar(code);
}

void modificarEstudinte(ListaCircularDoble *&lista){
    cout << "||-----ESTUDIANTES-----||\n";
    mostrarEstudiantes(lista);
    int code = 0;
    cout << "Ingrese el codigo del estudiante a modificar \n";
    cin >> code;
    lista->modificarLista(code);
}

void menu(ListaCircularDoble *&lista){
    int opc = 0;
    do {
        cout << "\n||---Bienvenido---||\n";
        cout << "1.Crear estudiante.\n";
        cout << "2.Cargar estudiantes.\n";
        cout << "3.Mostrar estudiantes.\n";
        cout << "4.Mostrar notas \n";
        cout << "5.Eliminar estudiante.\n";
        cout << "6.Modificar estudiantes.\n";
        cout << "9.Salir.\n\n";
        cout << "Ingrese la opcion deseada. \n";
        cin >> opc;

        switch (opc) {
            case 1:
                system("cls");
                crearEstudiante(lista);
                break;
            case 2:
                system("cls");
                cargarEstudiantes(lista);
                break;
            case 3:
                system("cls");
                mostrarEstudiantes(lista);
                break;
            case 4:
                system("cls");
                mostrarNotasEstudiante(lista);
                break;
            case 5:
                system("cls");
                eliminarEstudiante(lista);
                break;
            case 6:
                system("cls");
                modificarEstudinte(lista);
                break;
        }

    } while (opc != 9);
}

int main(){
    ListaCircularDoble *lista = new ListaCircularDoble();
    menu(lista);

    return 0;
}