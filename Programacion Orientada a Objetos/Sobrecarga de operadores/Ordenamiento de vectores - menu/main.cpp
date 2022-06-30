#include <iostream>

using namespace std;

class Ejercicio {
    private:
        int tamVec;
    public:
        void setTamvec(int tam);

        void leer(int *vec);
        void operator+(int *vec);
        void imprimir(int *vec);

        void leer(float *vec);
        void operator+(float *vec);
        void imprimir(float *vec);

        void leer(char *vec);
        void operator+(char *vec);
        void imprimir(char *vec);

};

void Ejercicio::setTamvec(int tam) {
    this->tamVec = tam;
}

void Ejercicio::leer(int *vec) {
    int tamVec0 = 0;
    cout << "Ingrese el tamaño del vector \n";
    cin >> tamVec0;
    setTamvec(tamVec0);

    for (int i = 0; i < tamVec; ++i) {
        cout << "ingrese un digito para pos [" << i << "] :";
        cin >> vec[i];
    }
}

void Ejercicio::operator+(int *vec) {
    int aux = 0;
    for (int i = 0; i < tamVec; ++i) {
        for (int j = 0; j < tamVec - 1; ++j) {
            if(vec[j] > vec[j + 1]){
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;
            }
        }
    }
}

void Ejercicio::imprimir(int *vec) {
    cout << "Su vector es: \n";
    for (int i = 0; i < tamVec; ++i) {
        cout << " [" << vec[i] << "] ";
    }
    cout << endl;
}

void Ejercicio::leer(float *vec) {
    int tamVec0 = 0;
    cout << "Ingrese el tamaño del vector \n";
    cin >> tamVec0;
    setTamvec(tamVec0);

    for (int i = 0; i < tamVec; ++i) {
        cout << "ingrese un digito para pos [" << i << "] :";
        cin >> vec[i];
    }
}

void Ejercicio::operator+(float *vec) {
    float aux = 0;
    for (int i = 0; i < tamVec; ++i) {
        for (int j = 0; j < tamVec - 1; ++j) {
            if(vec[j] > vec[j + 1]){
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;
            }
        }
    }
}

void Ejercicio::imprimir(float *vec) {
    cout << "Su vector es: \n";
    for (int i = 0; i < tamVec; ++i) {
        cout << " [" << vec[i] << "] ";
    }
    cout << endl;
}

void Ejercicio::leer(char *vec) {
    int tamVec0 = 0;
    cout << "Ingrese el tamaño del vector \n";
    cin >> tamVec0;
    setTamvec(tamVec0);

    for (int i = 0; i < tamVec; ++i) {
        cout << "ingrese un digito para pos [" << i << "] :";
        cin >> vec[i];
    }
}

void Ejercicio::operator+(char *vec) {
    char aux = 0;
    for (int i = 0; i < tamVec; ++i) {
        for (int j = 0; j < tamVec - 1; ++j) {
            if(vec[j] > vec[j + 1]){
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;
            }
        }
    }
}

void Ejercicio::imprimir(char *vec) {
    cout << "Su vector es: \n";
    for (int i = 0; i < tamVec; ++i) {
        cout << " [" << vec[i] << "] ";
    }
    cout << endl;
}

int main() {
    //declaro todos los vectores.
    int *vecInt, tam, opc = 0;
    vecInt = new int[tam];
    float *vecFloat;
    vecFloat = new float[tam];
    char *vecChar;
    vecChar = new char[tam];

    //Creo el objeto a
    Ejercicio a;

    // menucito
    do {
        cout << "Ingrese el dato que desea manejar \n";
        cout << "1. Enteros \n";
        cout << "2. Flotantes \n";
        cout << "3. Caracteres \n";
        cout << "4. Salir \n";
        cin >> opc;

        switch (opc) {
            case 1:
                a.leer(vecInt);
                a.imprimir(vecInt);
                a + vecInt;
                a.imprimir(vecInt);
                break;
            case 2:
                a.leer(vecFloat);
                a.imprimir(vecFloat);
                a + vecFloat;
                a.imprimir(vecFloat);
                break;
            case 3:
                a.leer(vecChar);
                a.imprimir(vecChar);
                a + vecChar;
                a.imprimir(vecChar);
                break;
            case 4:
                cout << "Gracias.\n";
        }
    } while (opc != 4);
    return 0;
}
