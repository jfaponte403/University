/*
    DAVID HERNAN CASALLAS BURGOS - 20212578047
    JHONATTAN FERNANDO APONTE GAMBOA - 20212578062
*/
#include <iostream>
#include "ArbolBin.h"

using namespace std;

void verificarHermanos(ArbolBin *&a){
    int id1 = 0, id2 = 0;
    cout << "Ingrese el id 1: ";
    cin >> id1;
    cout << "Ingrese el id 2: ";
    cin >> id2;
    Nodo *n1 = a->buscar(id1);
    Nodo *n2 = a->buscar(id2);
    a->sonHermanos(n1, n2);
}

void insertarDatosPrueba(ArbolBin *&a){
    Nodo *n1 = new Nodo(50, "A");
    a->insertar(n1);
    Nodo *n2 = new Nodo(60, "B");
    a->insertar(n2);
    Nodo *n3 = new Nodo(58, "C");
    a->insertar(n3);
    Nodo *n4 = new Nodo(70, "D");
    a->insertar(n4);
    Nodo *n5 = new Nodo(80, "E");
    a->insertar(n5);
    Nodo *n6 = new Nodo(63, "F");
    a->insertar(n6);
    Nodo *n7 = new Nodo(53, "G");
    a->insertar(n7);
    Nodo *n8 = new Nodo(56, "G");
    a->insertar(n8);
    Nodo *n9 = new Nodo(57, "G");
    a->insertar(n9);
        Nodo *n10 = new Nodo(54, "G");
    a->insertar(n10);
        Nodo *n11 = new Nodo(30, "G");
    a->insertar(n11);
        Nodo *n12 = new Nodo(38, "G");
    a->insertar(n12);
        Nodo *n13 = new Nodo(40, "G");
    a->insertar(n13);
        Nodo *n14 = new Nodo(33, "G");
    a->insertar(n14);
        Nodo *n15 = new Nodo(32, "G");
    a->insertar(n15);
}


void insertar(ArbolBin *&a){
    int id;
    string palabra;
    cout << "Ingrese el id: ";
    cin >> id;
    cout << "Ingrese la palabra: ";
    cin >> palabra;
    Nodo *n = new Nodo(id, palabra);
    a->insertar(n);
}

void menu(){
    ArbolBin *a = new ArbolBin();
    int opc = 0;
    do{
        cout << "1. Insertar" << endl;
        cout << "2. Insertar datos de prueba" << endl;
        cout << "3. PreOrden" << endl;
        cout << "4. PostOrden" << endl;
        cout << "5. InOrden" << endl;
        cout << "6. Imprimir" << endl;
        cout << "7. Peso del arbol" << endl;
        cout << "8. Mostrar nodos hoja" << endl;
        cout << "9. Mostrar nodos padres" << endl;
        cout << "10. Imprimir nodos hijos" << endl;
        cout << "11. Imprimir altura del arbol" << endl;
        cout << "12. Imprimir nivel del arbol" << endl;
        cout << "13. Imprimir Hijos unicos" << endl;
        cout << "14. Verificar si dos nodos son hermanos" << endl;
        cout << "15. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opc;
        switch(opc){
            case 1:
                insertar(a);
                break;
            case 2:
                insertarDatosPrueba(a);
                break;
            case 3:
                a->preOrden(a->raiz);
                break;
            case 4:
                a->postOrden(a->raiz);
                break;
            case 5:
                a->inOrden(a->raiz);
                break;
            case 6:
                a->imprimir(a->raiz, false, "");
                break;
            case 7:
				cout << "Peso del arbol: ";
            	cout <<a->pesoArbol() << endl;
                break;
            case 8:
            	cout << "--- NODOS HOJA ---" << endl;
            	a->hojas(a->raiz);
            	break;
            case 9:
            	cout << "--- NODOS PADRE ---" << endl;
            	a->imprimirPadres(a->raiz);
            	break;  
            case 10:
            	cout << "--- NODOS HIJOS ---" << endl;
            	a->imprimirHijos(a->raiz);
            	break;
            case 11: 
            	cout << "Altura del arbol: ";
            	cout << a->altura(a->raiz) << endl;
            	break;
            case 12:
            	cout << "Nivel del arbol: ";
            	cout << a->altura(a->raiz) << endl;
            	break;
            case 13:
            	system("cls");
            	a->imprimir(a->raiz, false, "");
            	cout << "\n\n";
                a->imprimirHijosUnicos(a->raiz);
                cout << endl;
                break;
            case 14:
                system("cls");
                verificarHermanos(a);
                break;
			default:
                cout << "Opcion no valida" << endl;
        }
    }while (opc != 15);
}

int main() {
    menu();

    return 0;
}
