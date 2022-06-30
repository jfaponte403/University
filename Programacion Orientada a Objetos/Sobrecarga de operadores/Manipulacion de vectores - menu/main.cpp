#include <iostream>

using namespace std;

class Ejercicio {
    private:
        int tamVec = 0, posActual = 0;
    public:
        void setTamVec(int x);
        void setPosActual(int x);

        void operator +(int *vec);
        void operator -(int *vec);
        void imprimir(int *vec);

        void operator +(float *vec);
        void operator -(float *vec);
        void imprimir(float *vec);

        void menuInt(Ejercicio a);
        void menuFloat(Ejercicio a);
        void menuMain(Ejercicio a);

};

void Ejercicio::setTamVec(int x) {
    this->tamVec = x;
}

void Ejercicio::setPosActual(int x) {
    posActual = x;
}

void Ejercicio::operator+(int *vec) {
    cout << "ingrese un digito \n";
    cin >> vec[posActual];
}

void Ejercicio::operator-(int *vec) {
    cout << "Se elimino \n";
    cout << " [" << vec[0] << "] \n";
    for (int i = 0; i < tamVec; ++i) {
        vec[i] = vec[i + 1];
    }
    vec[tamVec - 1] = 0;
}

void Ejercicio::imprimir(int *vec) {
    bool isEmpty = true;
    for (int i = 0; i < tamVec; ++i) {
        if(vec[i] != 0){
            isEmpty = false;
        }
    }
    if(!isEmpty){
        for (int i = 0; i < posActual; ++i) {
            if(vec[i] != 0){
                cout << " [" << vec[i] << "] ";
            }
        }
    } else {
        cout << "Esta vacio \n";
    }
    cout << endl;
}

void Ejercicio::operator+(float *vec) {
    cout << "ingrese un digito \n";
    cin >> vec[posActual];
}

void Ejercicio::operator-(float *vec) {
    cout << "Se elimino \n";
    cout << " [" << vec[0] << "] \n";
    for (int i = 0; i < tamVec; ++i) {
        vec[i] = vec[i + 1];
    }
    vec[tamVec - 1] = 0;
}

void Ejercicio::imprimir(float *vec) {
    bool isEmpty = true;
    for (int i = 0; i < tamVec; ++i) {
        if(vec[i] != 0){
            isEmpty = false;
        }
    }
    if(!isEmpty){
        for (int i = 0; i < posActual; ++i) {
            if(vec[i] != 0){
                cout << " [" << vec[i] << "] ";
            }
        }
    } else {
        cout << "Esta vacio \n";
    }
    cout << endl;
}

void Ejercicio::menuInt(Ejercicio a) {
    int opc = 0, *vecInt, posActual = 0;
    a.setPosActual(posActual);
    cout << "Ingrese el tamaño del vector \n";
    cin >> tamVec;
    a.setTamVec(tamVec);
    vecInt = new int [tamVec];
    do{
        cout << "Ingrese la opcion deseada \n";
        cout << "1. Insertar \n";
        cout << "2. Eliminar \n";
        cout << "3. Imprimir \n";
        cout << "4. Salir \n";
        cin >> opc;
        switch(opc){
            case 1:
                if(posActual < tamVec){
                    a + vecInt;
                    posActual++;
                    a.setPosActual(posActual);
                } else if (posActual == tamVec){
                    cout << "Su vector esta lleno \n";
                    break;
                }
                break;
            case 2:
                a - vecInt;
                posActual--;
                a.setPosActual(posActual);
                break;
            case 3:
                a.imprimir(vecInt);
                break;
            case 4:
                break;
            default:
                cout << "opcion ingresada no valida. \n" << endl;
                break;
        }
    }while(opc != 4);
}

void Ejercicio::menuFloat(Ejercicio a) {
    int opc = 0, posActual = 0;
    float *vecFloat;
    a.setPosActual(posActual);
    cout << "Ingrese el tamaño del vector \n";
    cin >> tamVec;
    a.setTamVec(tamVec);
    vecFloat = new float [tamVec];
    do{
        cout << "Ingrese la opcion deseada \n";
        cout << "1. Insertar \n";
        cout << "2. Eliminar \n";
        cout << "3. Imprimir \n";
        cout << "4. Salir \n";
        cin >> opc;
        switch(opc){
            case 1:
                if(posActual < tamVec){
                    a + vecFloat;
                    posActual++;
                    a.setPosActual(posActual);
                } else if (posActual == tamVec){
                    cout << "Su vector esta lleno \n";
                    break;
                }
                break;
            case 2:
                a - vecFloat;
                posActual--;
                a.setPosActual(posActual);
                break;
            case 3:
                a.imprimir(vecFloat);
                break;
            case 4:
                break;
            default:
                cout << "opcion ingresada no valida. \n" << endl;
                break;
        }
    }while(opc != 4);
}

void Ejercicio::menuMain(Ejercicio a) {
    int opc = 0;
    do{
        cout << "Ingrese la opcion deseada \n";
        cout << "1. Trabajar enteros \n";
        cout << "2. Trabajar flotantes \n";
        cout << "3. Salir \n";
        cin >> opc;

        switch(opc){
            case 1:
                a.menuInt(a);
                break;
            case 2:
                a.menuFloat(a);
                break;
            case 3:
                break;
            default:
                cout << "opcion ingresada no valida." << endl;
                break;
        }
    }while(opc != 3);
}

int main(){
    Ejercicio a;
    a.menuMain(a);
    return 0;
}