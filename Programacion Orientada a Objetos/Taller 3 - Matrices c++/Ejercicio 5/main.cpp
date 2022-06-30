#include <iostream>

using namespace std;

class Ejercicio{
    public:
    void getData();
    void process(int **mat, int tamMat);
    void printResult(int **mat, int tamMat);
};

void Ejercicio::getData() {
    int tamMat = 0, **mat;
    cout << "Ingrese el tamaño de la matriz \n";
    cin >> tamMat;

    mat = new int*[tamMat];
    for (int i = 0; i < tamMat; ++i) {
        mat[i] = new int[tamMat];
    }

    process(mat, tamMat);
}

void Ejercicio::process(int **mat, int tamMat) {
    //lleno la matriz de ceros
    for (int i = 0; i < tamMat; ++i) {
        for (int j = 0; j < tamMat; ++j) {
            mat[i][j] = 0;
        }
    }

    //Lleno la diagonal P de 1
    for (int i = 0; i < tamMat; ++i) {
        mat[i][i] = 1;
    }

    //Lleno la diagonal S de 1
    for (int i = 0; i < tamMat; ++i) {
        mat[i][(tamMat - 1) - i] = 1; // sumo las filas y las guardo en el vector.
    }

    printResult(mat, tamMat);
}

void Ejercicio::printResult(int **mat, int tamMat) {
    cout << "Su matriz es: \n";
    for (int i = 0; i < tamMat; ++i) {
        for (int j = 0; j < tamMat; ++j) {
            cout << "[" << mat[i][j] << "] ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    Ejercicio a;
    a.getData();

    return 0;
}
