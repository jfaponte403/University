#include <iostream>

using namespace std;

class Ejercicio{
    public:
        void leer(int a[], int tamVec);
        void leer(float vec[], int tamVec);
        void leer(char vec[], int tamVec);
        void ordenar(int b[], int tamVec);
        void ordenar(float *vec, int tamVec);
        void ordenar(char *vec, int tamVec);
        void imprimir(int *vec, int tamVec, int *copyVec);
        void imprimir(float *vec, int tamVec, float *copyVec);
        void imprimir(char *vec, int tamVec, char *copyVec);
};

void Ejercicio::leer(int vec[], int tamVec) {
    for (int i = 0; i < tamVec; ++i) {
        vec[i] = 0;
    }

    for (int i = 0; i < tamVec; ++i) {
        cout << "Ingrese un digita para la posicion [" << i << "] \n";
        cin >> vec[i];
    }

    ordenar(vec, tamVec);
}

void Ejercicio::ordenar(int *vec, int tamVec) {
    int *copyVec, aux = 0;
    copyVec = new int[tamVec];
    for (int i = 0; i < tamVec; ++i) {
        copyVec[i] = vec[i];
    }
    //ordenar el vector
    for (int i = 0; i < tamVec; ++i) {
        for (int j = 0; j < tamVec - 1; ++j) {
            if(vec[j] > vec[j + 1]){
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;
            }
        }
    }
    imprimir(vec, tamVec, copyVec);
}

void Ejercicio::imprimir(int *vec, int tamVec, int *copyVec) {
    cout << "Su vector es: \n";
    for (int i = 0; i < tamVec; ++i) {
        cout << " [" << copyVec[i] << "] ";
    }
    cout << endl;

    cout << "Su vector ordenado es: \n";
    for (int i = 0; i < tamVec; ++i) {
        cout << " [" << vec[i] << "] ";
    }
    cout << endl;
}

void Ejercicio::leer(float vec[], int tamVec) {
    for (int i = 0; i < tamVec; ++i) {
        vec[i] = 0;
    }

    for (int i = 0; i < tamVec; ++i) {
        cout << "Ingrese un digita para la posicion [" << i << "] \n";
        cin >> vec[i];
    }

    ordenar(vec, tamVec);
}

void Ejercicio::ordenar(float *vec, int tamVec) {
    float *copyVec, aux = 0;
    copyVec = new float[tamVec];
    for (int i = 0; i < tamVec; ++i) {
        copyVec[i] = vec[i];
    }
    //ordenar el vector
    for (int i = 0; i < tamVec; ++i) {
        for (int j = 0; j < tamVec - 1; ++j) {
            if(vec[j] > vec[j + 1]){
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;
            }
        }
    }
    imprimir(vec, tamVec, copyVec);
}

void Ejercicio::imprimir(float *vec, int tamVec, float *copyVec) {
    cout << "Su vector es: \n";
    for (int i = 0; i < tamVec; ++i) {
        cout << " [" << copyVec[i] << "] ";
    }
    cout << endl;

    cout << "Su vector ordenado es: \n";
    for (int i = 0; i < tamVec; ++i) {
        cout << " [" << vec[i] << "] ";
    }
    cout << endl;
}

void Ejercicio::leer(char vec[], int tamVec) {
    for (int i = 0; i < tamVec; ++i) {
        vec[i] = 0;
    }
    for (int i = 0; i < tamVec; ++i) {
        cout << "Ingrese un caracter para la posicion [" << i << "] \n";
        cin >> vec[i];
    }
    ordenar(vec, tamVec);
}

void Ejercicio::ordenar(char *vec, int tamVec) {
    char *copyVec, aux = 0;
    copyVec = new char[tamVec];
    for (int i = 0; i < tamVec; ++i) {
        copyVec[i] = vec[i];
    }
    //ordenar el vector
    for (int i = 0; i < tamVec; ++i) {
        for (int j = 0; j < tamVec - 1; ++j) {
            if(vec[j] > vec[j + 1]){
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;
            }
        }
    }
    imprimir(vec, tamVec, copyVec);
}

void Ejercicio::imprimir(char *vec, int tamVec, char *copyVec) {
    cout << "Su vector es: \n";
    for (int i = 0; i < tamVec; ++i) {
        cout << " [" << copyVec[i] << "] ";
    }
    cout << endl;

    cout << "Su vector ordenado es: \n";
    for (int i = 0; i < tamVec; ++i) {
        cout << " [" << vec[i] << "] ";
    }
    cout << endl;
}

int main() {
    Ejercicio a;
    int opc = 0, tamVec = 0;
    do {
        cout << "Ingrese el dato que desea manejar \n";
        cout << "1. Enteros \n";
        cout << "2. Flotantes \n";
        cout << "3. Caracteres \n";
        cout << "4. Salir \n";
        cin >> opc;

        switch (opc) {
            case 1:
                int *vecInt;
                cout << "Ingrese el tamaño del arreglo \n";
                cin >> tamVec;
                vecInt = new int[tamVec];
                a.leer(vecInt, tamVec);
                break;
            case 2:
                cout << "Ingrese el tamaño del arreglo \n";
                cin >> tamVec;
                float *vecFloat;
                vecFloat = new float[tamVec];
                a.leer(vecFloat, tamVec);
                break;
            case 3:
                cout << "Ingrese el tamaño del arreglo \n";
                cin >> tamVec;
                char *vecChar;
                vecChar = new char[tamVec];
                a.leer(vecChar, tamVec);
                break;
            case 4:
                cout << "Gracias.\n";
        }
    } while (opc != 4);

    return 0;
}
