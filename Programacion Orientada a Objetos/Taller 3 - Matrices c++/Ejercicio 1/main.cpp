#include <iostream>

using namespace std;

class MatrizN {
public:
    void getData();
    void setProcess(int **mat, int tamMat);
    void getPrint(int **mat, int tamMat, int *sumF, int totalF,int *sumC, int totalC,
                  int *sumDiagP, int totalDiagP, int *sumDiagS, int totalDiagS, int totalFinal);
};

void MatrizN::getData() {
    int tamMat = 0, **matInt;

    cout << "Ingrese el tamaño de la matriz \n";
    cin >> tamMat;

    matInt = new int*[tamMat];
    for (int i = 0; i < tamMat; ++i) {
        matInt[i] = new int[tamMat];
    }

    for (int i = 0; i < tamMat; ++i) {
        for (int j = 0; j < tamMat; ++j) {
            cout << "Ingrese un numero para la posicion: [" << i << "]" << "[" << j << "]" << "\n";
            cin >> matInt[i][j];
        }
    }
    setProcess(matInt, tamMat);
}

void MatrizN::setProcess(int **mat, int tamMat) {
    //Suma Filas.
    int *sumFilas, totalFilas = 0;
    //Creo un vector que me guarde la suma de las filas
    sumFilas = new int[tamMat];

    //Limpio el vector
    for (int i = 0; i < tamMat; ++i) {
        sumFilas[i] = 0;
    }

    int aux = 0;
    //Sumo las filas y las guardo en el vector
    for (int i = 0; i < tamMat; ++i) {
        for (int j = 0; j < tamMat; ++j) {
            sumFilas[aux] = sumFilas[i] + mat[i][j]; // sumo las filas y las guardo en el vector.
        }
        aux++;
    }

    //Sumo el total de las filas
    for (int i = 0; i < tamMat; ++i) {
        totalFilas = totalFilas + sumFilas[i];
    }

    //Sumar columnas
    int *sumColumnas, totalColumnas = 0;
    //Creo un vector que me guarde la suma de las Columnas
    sumColumnas = new int[tamMat];

    //Limpio el vector
    for (int i = 0; i < tamMat; ++i) {
        sumColumnas[i] = 0;
    }

    int aux0 = 0;
    //Sumo las Columnas y las guardo en el vector
    for (int i = 0; i < tamMat; ++i) {
        for (int j = 0; j < tamMat; ++j) {
            sumColumnas[aux0] = sumColumnas[i] + mat[j][i]; // sumo las filas y las guardo en el vector.
        }
        aux0++;
    }

    //Sumo el total de las Columnas
    for (int i = 0; i < tamMat; ++i) {
        totalColumnas = totalColumnas + sumColumnas[i];
    }


    //Suma diagonal principal.
    int *sumDiagP, totalDiagP = 0;
    //Creo un vector que me guarde la suma de las DiagP
    sumDiagP = new int[tamMat];

    //Limpio el vector
    for (int i = 0; i < tamMat; ++i) {
        sumDiagP[i] = 0;
    }

    //Sumo las DiagP y las guardo en el vector
    for (int i = 0; i < tamMat; ++i) {
        sumDiagP[i] = sumDiagP[i] + mat[i][i]; // sumo las filas y las guardo en el vector.
    }

    //Sumo el total de las DiagP
    for (int i = 0; i < tamMat; ++i) {
        totalDiagP = totalDiagP + sumDiagP[i];
    }

    //Sumo Diagonal Secundaria
    int *sumDiagS, totalDiagS = 0;
    //Creo un vector que me guarde la suma de las Columnas
    sumDiagS = new int[tamMat];

    //Limpio el vector
    for (int i = 0; i < tamMat; ++i) {
        sumDiagS[i] = 0;
    }

    // 00 01 02
    // 10 11 12
    // 20 21 22

    //Sumo las DiagS y las guardo en el vector
    for (int i = 0; i < tamMat; ++i) {
        sumDiagS[i] = sumDiagS[i] + mat[i][(tamMat - 1) - i]; // sumo las filas y las guardo en el vector.
    }

    //Sumo el total de las Columnas
    for (int i = 0; i < tamMat; ++i) {
        totalDiagS = totalDiagS + sumDiagS[i];
    }

    //sumarTodo
    int totalFinal = 0;
    for (int i = 0; i < tamMat; ++i) {
        for (int j = 0; j < tamMat; ++j) {
            totalFinal = totalFinal + mat[i][j];
        }
    }

    getPrint(mat, tamMat, sumFilas, totalFilas, sumColumnas, totalColumnas,
             sumDiagP, totalDiagP, sumDiagS, totalDiagS, totalFinal);
}

void MatrizN::getPrint(int **mat, int tamMat, int *sumF, int totalF, int *sumC, int totalC, int *sumDiagP, int totalDiagP,
                       int *sumDiagS, int totalDiagS, int totalFinal) {
    cout << "Su matriz es: \n";
    for (int i = 0; i < tamMat; ++i) {
        for (int j = 0; j < tamMat; ++j) {
            cout << "[" << mat[i][j] << "] ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Las filas suman \n";
    for (int i = 0; i < tamMat; ++i) {
        cout << "Fila " << (i + 1) << ": [" << sumF[i] << "] ";
    }
    cout << endl;
    cout << "El total de las filas es: " << totalF << endl;
    cout << endl;

    cout << "Las Columnas suman \n";
    for (int i = 0; i < tamMat; ++i) {
        cout << "Columna " << (i + 1) << ": [" << sumC[i] << "] ";
    }
    cout << endl;
    cout << "El total de las Columnas es: " << totalC << endl;
    cout << endl;

    cout << "La diagonal principal suma \n";
    for (int i = 0; i < tamMat; ++i) {
        cout << "Diagonal " << (i + 1) << ": [" << sumDiagP[i] << "] ";
    }
    cout << endl;
    cout << "El total de las diagonal es: " << totalDiagP << endl;
    cout << endl;

    cout << "La diagonal secundaria suma \n";
    for (int i = 0; i < tamMat; ++i) {
        cout << "Diagonal " << (i + 1) << ": [" << sumDiagS[i] << "] ";
    }
    cout << endl;
    cout << "El total de las diagonal es: " << totalDiagS << endl;
    cout << endl;

    cout << endl;
    cout << "El total de la matriz es: " << totalFinal << endl;
    cout << endl;
}

int main(){
    MatrizN A;
    A.getData();

    return 0;
}
