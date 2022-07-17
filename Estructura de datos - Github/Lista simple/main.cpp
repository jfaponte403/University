#include <iostream>
#include "ListaSimple.h"

using namespace std;

int currentID = 1;

void menuMain(int currentID);
void cargarProductos(ListaSimple *&lista);
void mostrarProductos(ListaSimple *&lista);
void eliminarProducto(ListaSimple *&lista);
void crearProducto(ListaSimple *&lista);
void ModificarProducto(ListaSimple *&lista);

void ModificarProducto(ListaSimple *&lista){
    int item = 0, opc = 0;
    cout << "ID\tNOMBRE\tPRECIO\tUNIDADES\tIVA\n";
    lista->mostrarLista();
    cout << "\n Ingrese el ID del producto a modificar\n\n";
    cin >> item;
    lista->modificarLista(item);
}

void crearProducto(ListaSimple *&lista){
    string nameOfProduct;
    int price = 0, unity = 0;
    double iva = 0, ivaPorcent = 0;

    cout << "Ingrese el nombre del producto que desea agregar \n";
    cin >> nameOfProduct;

    cout << "Ingrese el precio del " << nameOfProduct << " producto que desea agregar \n";
    cin >> price;

    cout << "Ingrese las unidades del " << nameOfProduct << " producto que desea agregar \n";
    cin >> unity;

    cout << "Ingrese el % iva del " << nameOfProduct << " producto que desea agregar \n";
    cin >> iva;
    ivaPorcent = iva / 100;

    Producto *nuevoProducto = new Producto(currentID, nameOfProduct, price, unity, ivaPorcent);
    lista->insertar(nuevoProducto);
    currentID++;
}

void eliminarProducto(ListaSimple *&lista){
    lista->mostrarLista();
    int item = 0;
    cout << "\n\n Ingrese el id del producto que desea eliminar \n";
    cin >> item;
    lista->eliminar(item);
}

void mostrarProductos(ListaSimple *&lista){
    cout << "ID\tNOMBRE\tPRECIO\tUNIDADES\tIVA\n";
    lista->mostrarLista();
}

void cargarProductos(ListaSimple *&lista){
    Producto *obj1 = new Producto(currentID, "pan", 500, 100, 0);
    lista->insertar(obj1);
    currentID++;
    Producto *obj2 = new Producto(currentID, "te", 750, 80, 0);
    lista->insertar(obj2);
    currentID++;
    Producto *obj3 = new Producto(currentID, "cafe", 900, 60, 0);
    lista->insertar(obj3);
    currentID++;
    Producto *obj4 = new Producto(currentID, "pasta", 5000, 10, 0);
    lista->insertar(obj4);
    currentID++;
    Producto *obj5 = new Producto(currentID, "carne", 8900, 10, 0);
    currentID++;
    lista->insertar(obj5);
}

void menuMain(){
    ListaSimple *lista = new ListaSimple();
    int opc = 0;
    do {
        cout << "\n\nBienvenido\n";
        cout << "1.Crear producto.\n";
        cout << "2.Cargar producto.\n";
        cout << "3.Mostrar producto.\n";
        cout << "4.Eliminar producto.\n";
        cout << "5.Modificar Producto.\n";
        cout << "9.Salir.\n\n";
        cout << "ingrese la opcion deseada. \n";
        cin >> opc;

        switch (opc) {
            case 1:
                system("cls");
                crearProducto(lista);
                cout << "Producto creado con exito \n";
                break;
            case 2:
                system("cls");
                cargarProductos(lista);
                cout << "productos base cargados \n";
                break;
            case 3:
                system("cls");
                mostrarProductos(lista);
                break;
            case 4:
                system("cls");
                eliminarProducto(lista);
                break;
            case 5:
                system("cls");
                ModificarProducto(lista);
                break;
            case 9:
                system("cls");
                cout << "Gracias... \n";
                break;
        }
    } while (opc != 9);
}

int main(){
    menuMain();

    return 0;
}