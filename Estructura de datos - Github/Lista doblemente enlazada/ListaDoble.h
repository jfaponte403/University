#include <iostream>
#include "Producto.h"

using namespace std;

class ListaDoble{
public:
    Producto *cab;
    ListaDoble();
    void insertar(Producto *&);
    void mostrarLista();
    void eliminar(int);
    void modificarLista(int);
    void modificarElementosLista(Producto *&);
};

ListaDoble::ListaDoble(){
    this->cab = NULL;
}

void ListaDoble::insertar(Producto *&nuevo){
    if(nuevo != NULL){
        if(cab != NULL){
            Producto *aux = cab;
            if (nuevo->perecedero){
                while(aux->sig != NULL){
                    aux = aux->sig;
                }
                aux->sig = nuevo;
                nuevo->ant = aux;
            } else {
                while(aux->ant != NULL){
                    aux = aux->ant;
                }
                aux->ant = nuevo;
                nuevo->sig = aux;
            }
        } else {
            // Se crea la cabeza de la lista.
            cab = nuevo;
        }
    } else {
        cout << "El dato es nulo \n";
    }
}

void ListaDoble::mostrarLista(){
    if(cab != NULL){
        Producto *aux = cab;
        while(aux != NULL){
            aux->mostrar_p();
            aux = aux->sig;
        }
        aux = cab;
        aux = aux->ant;
        while(aux != NULL){
            aux->mostrar_p();
            aux = aux->ant;
        }
    } else {
        cout << "Lista no existe \n";
    }
}

void ListaDoble::eliminar(int item){

    if(cab!= NULL){
        Producto *aux = cab, *aux0 = cab;
        if(item == aux->getId_p()){
            /* cout << "item es: " << item << " aux->getId_p() es " << aux->getId_p() << endl;
            cout << "item es: " << item << " aux->sig->getId_p() es " << aux->sig->getId_p() << endl;
            cout << "item es: " << item << " aux->ant->getId_p() es " << aux->ant->getId_p() << endl;
            cout << "Cabeza ahora es: " <<cab->getId_p() << endl;
            cout << "Cabeza en sig es: " << cab->sig->getId_p() << endl;
            cout << "Cabeza en ant es: " << cab->ant->getId_p() << endl; */
            cab = aux->sig;
            cab->ant = aux0->ant;
            delete aux, aux0;
        } else {
            //Busco hasta encontrar el nodo a eliminar
            while(aux->sig!=NULL && aux->sig->getId_p()!=item){
                aux = aux->sig;
            }
            if(aux->sig != NULL){
                Producto *elim = aux->sig;
                aux->sig = elim->sig;
                delete elim;
            }
            while(aux0->ant != NULL && aux0->ant->getId_p() != item){
                aux0 = aux0->ant;
            }
            if(aux0->ant != NULL){
                Producto *elim = aux0->ant;
                aux0->ant = elim->ant;
                delete elim;
            }
        }
    }
    else{
        cout<<"La lista no existe"<<endl;
    }
}

void ListaDoble::modificarElementosLista(Producto *&lista){
    int opc = 0, newPrice = 0, newUnity = 0, opcPerecedero = 0;
    double newIva = 0.0;
    string newName;
    do {
        cout << "1. Modificar nombre \n";
        cout << "2. Modificar precio \n";
        cout << "3. Modificar unidades \n";
        cout << "4. Modificar iva \n";
        cout << "5. Modificar estado perecedero. \n";
        cout << "9. salir \n";
        cout << "digite la opcion a modificar \n";
        cin >> opc;

        switch (opc) {
            case 1:
                system("cls");
                cout << "ingrese el nuevo nombre \n";
                cin >> newName;
                lista->setNombre_p(newName);
                break;
            case 2:
                system("cls");
                cout << "ingrese el nuevo precio \n";
                cin >> newPrice;
                lista->setValor_p(newPrice);
                break;
            case 3:
                system("cls");
                cout << "ingrese las nuevas unidades \n";
                cin >> newUnity;
                lista->setUnd_p(newUnity);
                break;
            case 4:
                system("cls");
                cout << "ingrese el nuevo iva en % \n";
                cin >> newIva;
                newIva = newIva / 100;
                lista->setIva_p(newIva);
                break;
            case 5:
                system("cls");
                cout << "Ingrese 1 si es para perecedero u otro numero para no. \n";
                cin >> opcPerecedero;
                if (opcPerecedero == 1) {
                    lista->setPerecedero(true);
                } else {
                    lista->setPerecedero(false);
                }
                break;
            case 9:
                system("cls");
                cout << "Finalizando.... \n";
                break;
        }
    } while (opc != 9);
}

void ListaDoble::modificarLista(int item) {
    if(cab!= NULL){
        Producto *aux = cab;
        Producto *aux0 = cab;

        if (aux->getId_p() == item){
            modificarElementosLista(aux);
        } else if (aux0->getId_p() == item){
            modificarElementosLista(aux0);
        }

        while (aux->getId_p() != item || aux0->getId_p() != item){
            if (aux->getId_p() == item){
                modificarElementosLista(aux);
                break;
            } else if (aux0->getId_p() == item){
                modificarElementosLista(aux0);
                break;
            }
            aux = aux->sig;
            aux0 = aux0->ant;
        }
    }
    else{
        cout<<"La lista no existe"<<endl;
    }
}