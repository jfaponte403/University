#include <iostream>
#include "ListaDoble.h"

using namespace std;

int currentID = 1;

void menuMain(int currentID);
void cargarProductos(ListaDoble *&lista);
void mostrarProductos(ListaDoble *&lista);
void eliminarProducto(ListaDoble *&lista);
void crearProducto(ListaDoble *&lista);
void ModificarProducto(ListaDoble *&lista);

void ModificarProducto(ListaDoble *&lista){
    int item = 0, opc = 0;
    cout << "ID\tNOMBRE\tPRECIO\tUNIDADES\tIVA\tPERECEDERO\n";
    lista->mostrarLista();
    cout << "\n Ingrese el ID del producto a modificar\n\n";
    cin >> item;
    lista->modificarLista(item);
}

void crearProducto(ListaDoble *&lista){
    string nameOfProduct;
    int price = 0, unity = 0;
    double iva = 0, ivaPorcent = 0;
    bool esPerecedero = true;
    int opcPerecedero = 0;

    cout << "Ingrese el nombre del producto que desea agregar \n";
    cin >> nameOfProduct;

    cout << "Ingrese el precio del " << nameOfProduct << " producto que desea agregar \n";
    cin >> price;

    cout << "Ingrese las unidades del " << nameOfProduct << " producto que desea agregar \n";
    cin >> unity;

    cout << "Ingrese el % iva del " << nameOfProduct << " producto que desea agregar \n";
    cin >> iva;
    ivaPorcent = iva / 100;

    cout << "El producto es perecedero 1 = si, 2 = no \n";
    cin >> opcPerecedero;
    switch (opcPerecedero) {
        case 1:
            esPerecedero = true;
            break;
        case 2:
            esPerecedero = false;
            break;
        default:
            break;
    }

    Producto *nuevoProducto = new Producto(currentID, nameOfProduct, price, unity, ivaPorcent, esPerecedero);
    lista->insertar(nuevoProducto);
    currentID++;
}

void eliminarProducto(ListaDoble *&lista){
    lista->mostrarLista();
    int item = 0;
    cout << "\n\n Ingrese el id del producto que desea eliminar \n";
    cin >> item;
    lista->eliminar(item);
}

void mostrarProductos(ListaDoble *&lista){
    cout << "ID\tNOMBRE\tPRECIO\tUNIDADES\tIVA\tPERECEDERO\n";
    lista->mostrarLista();
}

void cargarProductos(ListaDoble *&lista){
    Producto *obj1 = new Producto(currentID, "pan", 500, 100, 0, true);
    lista->insertar(obj1);
    currentID++;
    Producto *obj2 = new Producto(currentID, "te", 750, 80, 0, true);
    lista->insertar(obj2);
    currentID++;
    Producto *obj3 = new Producto(currentID, "cafe", 900, 60, 0, true);
    lista->insertar(obj3);
    currentID++;
    Producto *obj4 = new Producto(currentID, "pasta", 5000, 10, 0, true);
    lista->insertar(obj4);
    currentID++;
    Producto *obj5 = new Producto(currentID, "carne", 8900, 10, 0, true);
    currentID++;
    lista->insertar(obj5);
    Producto *obj6 = new Producto(currentID, "Esfero", 1000, 100, 0, false);
    currentID++;
    lista->insertar(obj6);
    Producto *obj7 = new Producto(currentID, "Espuma", 2500, 130, 0, false);
    currentID++;
    lista->insertar(obj7);
}

void menuMain(){
    ListaDoble *lista = new ListaDoble();
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
