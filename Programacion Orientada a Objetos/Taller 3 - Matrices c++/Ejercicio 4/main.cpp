#include <iostream>

using namespace std;

class Ejercicio{
    public:
    void getData();
    void magicMat(int tamMat);
    void printMat(int tamMat,int **mat);
};

void Ejercicio::getData() {
    int tamMat = 0;
    cout << "ingrese el tamaño de la matriz \n";
    cin >> tamMat;

    magicMat(tamMat);
}

void Ejercicio::magicMat(int tamMat) {
    // creo la matriz
    int **mat;
    mat = new int*[tamMat];
    for (int i = 0; i < tamMat; ++i) {
        mat[i] = new int [tamMat];
    }
    // limpio la matriz.
    for (int i = 0; i < tamMat; ++i) {
        for (int j = 0; j < tamMat; ++j) {
            mat[i][j] = 0;
        }
    }

    int f = 0;
    int c = tamMat/2;

    for(int i = 1; i <= tamMat*tamMat; i++){
        mat[f][c] = i;
        if(i % tamMat == 0){
            f = f + 1;
            if(f >= tamMat){
                f = 0;
            }
        } else {
            c = c + 1;
            if(c >= tamMat){
                c = 0;
            }
            f = f + 1;
            if(f >= tamMat){
                f=0;
            }
            f = f + 1;
            if(f >= tamMat){
                f = 0;
            }
        }
    }
    printMat(tamMat, mat);
}

void Ejercicio::printMat(int tamMat, int **mat) {
    cout << "Su matriz magica es: \n";
    for (int i = 0; i < tamMat; ++i) {
        for (int j = 0; j < tamMat; ++j) {
            cout << " [" << mat[i][j] << "] ";
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
