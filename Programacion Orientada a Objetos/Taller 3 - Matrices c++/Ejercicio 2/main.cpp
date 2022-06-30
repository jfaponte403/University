#include <iostream>

using namespace std;

class Ejercicio{
    public:
    void getData();
    void getProcess(int **mat, int tamMatF, int tamMatC);
    void printResult(int **mat, int tamMatF, int tamMatC,
                     int sumTotalOfMat, float prom, int *mayoresProm,
                     int *menoresProm, int totalPos);
};

void Ejercicio::getData() {
    //Pido el tamaño de la matriz
    int tamMatF = 0, tamMatC = 0;
    cout << "Ingrese el numero de filas de la matriz \n";
    cin >> tamMatF;
    cout << "Ingrese el numero de filas de la columnas \n";
    cin >> tamMatC;
    cout << "\n\n";

    //Creo la matriz;
    int **matInt;
    matInt = new int*[tamMatF];
    for (int i = 0; i < tamMatF; ++i) {
        matInt[i] = new int[tamMatC];
    }
    // Limpio la matriz.
    for (int i = 0; i < tamMatF; ++i) {
        for (int j = 0; j < tamMatC; ++j) {
            matInt[i][j] = 0;
        }
    }

    // Pido los datos
    for (int i = 0; i < tamMatF; ++i) {
        for (int j = 0; j < tamMatC; ++j) {
            cout << "Ingrese un numero para la posicion: [" << i << "]" << "[" << j << "]" << "\n";
            cin >> matInt[i][j];
        }
    }

    //Llamo al proceso.
    getProcess(matInt, tamMatF, tamMatC);
}

void Ejercicio::getProcess(int **mat, int tamMatF, int tamMatC) {
    // Suma total de la matriz
    int sumTotalOfMat = 0;
    for (int i = 0; i < tamMatF; ++i) {
        for (int j = 0; j < tamMatC; ++j) {
            sumTotalOfMat = sumTotalOfMat + mat[i][j];
        }
    }

    //Obtener promedio
    float prom = 0.0;
    int totalPos = 0, aux0 = 0;
    totalPos = (tamMatC * tamMatF);
    prom = sumTotalOfMat / totalPos;

    //Mayores al promedio
    //creo un vector para guardar los mayores al promedio.
    int *mayoresProm;
    mayoresProm = new int[totalPos];

    // limpio el vector que guarda los mayores al promedio.
    for (int i = 0; i < totalPos; ++i) {
        mayoresProm[i] = 0;
    }

    //Guardo los mayores al prom
    for (int i = 0; i < tamMatF; ++i) {
        for (int j = 0; j < tamMatC; ++j) {
            //valido si es mayor al promedio el numero en la pos i j.
            if(mat[i][j] > prom){
                mayoresProm[aux0] = mat[i][j];
                aux0++;
            }
        }
    }

    //Menores al promedio
    //creo un vector para guardar los menores al promedio.
    int *menoresProm;
    menoresProm = new int[totalPos];

    // limpio el vector que guarda los mayores al promedio.
    for (int i = 0; i < totalPos; ++i) {
        menoresProm[i] = 0;
    }

    //Guardo los menores al prom
    for (int i = 0; i < tamMatF; ++i) {
        for (int j = 0; j < tamMatC; ++j) {
            //valido si es mayor al promedio el numero en la pos i j.
            if(prom > mat[i][j]){
                menoresProm[aux0] = mat[i][j];
                aux0++;
            }
        }
    }
    printResult(mat, tamMatF, tamMatC, sumTotalOfMat, prom, mayoresProm, menoresProm, totalPos);
}

void Ejercicio::printResult(int **mat, int tamMatF, int tamMatC,
                            int sumTotalOfMat, float prom, int *mayoresProm,
                            int *menoresProm, int totalPos) {
    cout << "\n\n Su matriz \n";
    for (int i = 0; i < tamMatF; ++i) {
        for (int j = 0; j < tamMatC; ++j) {
            cout << " [" << mat[i][j] << "] ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "La suma total de la matriz es: " << sumTotalOfMat << endl;
    cout << "El promedio de la matriz es: " << prom << endl;
    cout << endl;

    cout << "Numeros mayores al promedio de la matriz \n";
    for (int i = 0; i < totalPos; ++i) {
        if(mayoresProm[i] != 0){
            cout << " [" << mayoresProm[i] << "] ";
        }
    }
    cout << endl;

    cout << "Numeros menores al promedio de la matriz \n";
    for (int i = 0; i < totalPos; ++i) {
        if(menoresProm[i] != 0){
            cout << " [" << menoresProm[i] << "] ";
        }
    }
    cout << endl;
}

int main(){
    Ejercicio a;
    a.getData();
    return 0;
}
