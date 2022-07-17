#include <iostream>
#include "Producto.h"

using namespace std;

class ListaSimple{
public:
    Producto *cab;
    ListaSimple();
    void insertar(Producto *&);
    void mostrarLista();
    void eliminar(int);
    void modificarLista(int);
    void modificarElementosLista(Producto *&);
};

ListaSimple::ListaSimple(){
    this->cab = NULL;
}

void ListaSimple::insertar(Producto *&nuevo){
    if(nuevo != NULL){
        if(cab != NULL){
            // Lista ya existe.
            // Se recorre la lista hasta llegar al ultimo nodo nulo. (NULL)
            Producto *aux = cab; // creo la copia.
            while(aux->sig != NULL){
                aux = aux->sig;
            }
            aux->sig = nuevo;
        } else {
            // Se crea la cabeza de la lista.
            cab = nuevo;
        }
    } else {
        cout << "El dato es nulo \n";
    }
}

void ListaSimple::mostrarLista(){
    if(cab != NULL){
        Producto *aux = cab;
        while(aux != NULL){
            aux->mostrar_p();
            aux = aux->sig;
        }
    } else {
        cout << "Lista no existe \n";
    }
}

void ListaSimple::eliminar(int item){
    if(cab!= NULL){
        Producto *aux=cab;
        if(aux->getId_p()==item){ //Se cambia la cabeza por el siguiente nodo que esta enlazado
            cab = aux->sig;
            delete aux;

        } else{ //De lo contrario se continua buscando hasta el final de la lista o encontrarlo
            while(aux->sig!=NULL && aux->sig->getId_p()!=item){
                aux=aux->sig;
            }
            if(aux->sig == NULL){
                cout<<"No esta en la lista "<<endl;
            }else{
                Producto *elim = aux->sig;
                aux->sig = elim->sig;
                delete elim;
            }
        }
    }
    else{
        cout<<"La lista no existe"<<endl;
    }
}

void ListaSimple::modificarElementosLista(Producto *&lista){
    int opc = 0, newPrice = 0, newUnity = 0;
    double newIva = 0.0;
    string newName;
    do {
        cout << "1. Modificar nombre \n";
        cout << "2. Modificar precio \n";
        cout << "3. Modificar unidades \n";
        cout << "4. Modificar iva \n";
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
            case 9:
                system("cls");
                cout << "Finalizando.... \n";
                break;
        }
    } while (opc != 9);
}

void ListaSimple::modificarLista(int item) {
    if(cab!= NULL){
        Producto *aux=cab;
        if(aux->getId_p()==item){
            modificarElementosLista(aux);
        } else{
            //Si no toca busca la lista que sea igual al id.
            while (aux->sig->getId_p() != item){
                aux = aux->sig;
            }
            aux = aux->sig;
            modificarElementosLista(aux);
        }
    }
    else{
        cout<<"La lista no existe"<<endl;
    }
}
