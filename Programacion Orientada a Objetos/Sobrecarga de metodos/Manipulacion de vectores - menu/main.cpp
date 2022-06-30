#include <iostream>

using namespace std;

class Ejercicio{
    public:
    //menus
    void menuMain();
    void menuInt();
    void menuFloat();
    //metodos enteros
    void insertar(int tamVector, int count, int *vec);
    void imprimir(int tamVector, int *vec, int count);
    void eliminar(int tamVector, int *vec);
    //metodos enteros
    void insertar(int tamVector, int count, float *vec);
    void imprimir(int tamVector, float *vec, int count);
    void eliminar(int tamVector, float *vec);
};

//metodos para enteros;
void Ejercicio::eliminar(int tamVector, int *vec) {
    cout << "Se elimino \n";
    cout << " [" << vec[0] << "] \n";
    for (int i = 0; i < tamVector; ++i) {
        vec[i] = vec[i + 1];
    }
    vec[tamVector - 1] = 0;
}

void Ejercicio::insertar(int tamVector, int count, int *vec){
    cout << "ingrese el numero que desea insertar \n";
    cin >> vec[count];
}

void Ejercicio::imprimir(int tamVector, int *vec, int count){
    bool isEmpty = true;
    for (int i = 0; i < tamVector; ++i) {
        if(vec[i] != 0){
            isEmpty = false;
        }
    }
    if(!isEmpty){
        for (int i = 0; i < count; ++i) {
            if(vec[i] != 0){
                cout << " [" << vec[i] << "] ";
            }
        }
    } else {
        cout << "Esta vacio \n";
    }
    cout << endl;
}

//metodos para flotantes.
void Ejercicio::eliminar(int tamVector, float *vec) {
    cout << "Se elimino \n";
    cout << " [" << vec[0] << "] \n";
    for (int i = 0; i < tamVector; ++i) {
        vec[i] = vec[i + 1];
    }
    vec[tamVector - 1] = 0;
}

void Ejercicio::insertar(int tamVector, int count, float *vec){
    cout << "ingrese el numero que desea insertar \n";
    cin >> vec[count];
}

void Ejercicio::imprimir(int tamVector, float *vec, int count) {
    bool isEmpty = true;
    for (int i = 0; i < tamVector; ++i) {
        if(vec[i] != 0){
            isEmpty = false;
        }
    }
    if(!isEmpty){
        for (int i = 0; i < count; ++i) {
            if(vec[i] != 0){
                cout << " [" << vec[i] << "] ";
            }
        }
    } else {
        cout << "Esta vacio \n";
    }
    cout << endl;
}

//menus
void Ejercicio::menuMain(){
    int opc = 0;
    do{
        cout << "Ingrese la opcion deseada \n";
        cout << "1. Trabajar enteros \n";
        cout << "2. Trabajar flotantes \n";
        cout << "3. Salir \n";
        cin >> opc;

        switch(opc){
            case 1:
                menuInt();
                break;
            case 2:
                menuFloat();
                break;
            case 3:
                break;
            default:
                cout << "opcion ingresada no valida." << endl;
                break;
        }

    }while(opc != 3);
}

void Ejercicio::menuInt(){
    int opc = 0, tamVec = 0, *vecInt, count = 0;

    cout << "Ingrese el tamaÃ±o del arreglo de enteros \n";
    cin >> tamVec;

    vecInt = new int[tamVec];
    for (int i = 0; i < tamVec; ++i) {
        vecInt[i] = 0;
    }

    do{
        cout << "Ingrese la opcion deseada \n";
        cout << "1. Insertar \n";
        cout << "2. Eliminar \n";
        cout << "3. Imprimir \n";
        cout << "4. Salir \n";
        cin >> opc;

        switch(opc){
            case 1:
                if(count < tamVec){
                    insertar(tamVec, count, vecInt);
                    count++;
                } else if (count == tamVec){
                    cout << "El arreglo esta lleno \n";
                    cout << "No pede pedir mas datos \n";
                    break;
                }
                break;
            case 2:
                eliminar(tamVec, vecInt);
                count--;
                break;
            case 3:
                imprimir(tamVec, vecInt, count);
                break;
            case 4:
                break;
            default:
                cout << "opcion ingresada no valida. \n" << endl;
                break;
        }

    }while(opc != 4);
}

void Ejercicio::menuFloat(){
    int opc = 0, tamVec = 0, count = 0;
    float *vecFloat;

    cout << "Ingrese el tamaÃ±o del arreglo de flotantes \n";
    cin >> tamVec;

    vecFloat = new float[tamVec];
    for (int i = 0; i < tamVec; ++i) {
        vecFloat[i] = 0;
    }

    do{
        cout << "Ingrese la opcion deseada \n";
        cout << "1. Insertar \n";
        cout << "2. Eliminar \n";
        cout << "3. Imprimir \n";
        cout << "4. Salir \n";
        cin >> opc;

        switch(opc){
            case 1:
                if(count < tamVec){
                    insertar(tamVec, count, vecFloat);
                    count++;
                } else if (count == tamVec){
                    cout << "El arreglo esta lleno \n";
                    cout << "No pede pedir mas datos \n";
                    break;
                }
                break;
            case 2:
                eliminar(tamVec, vecFloat);
                count--;
                break;
            case 3:
                imprimir(tamVec, vecFloat, count);
                break;
            case 4:
                break;
            default:
                cout << "opcion ingresada no valida. \n" << endl;
                break;
        }

    }while(opc != 4);
}

int main(){
    Ejercicio A;
    A.menuMain();
    return 0;
}