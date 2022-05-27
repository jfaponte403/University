/*
Leer una matriz y hallar la traspuesta (maneje dos matrices, una para la original y otra para la
traspuesta e imprímalas)
*/

#include <iostream>
using namespace std;

class trasnMat{
private:
    int matUser[3][3], trasnMat0[3][3];
public:
    trasnMat();
    ~trasnMat();
    void getMat();
    void printResult();
};

trasnMat::trasnMat(){
    cout << "Iniciando....." << endl;
}

trasnMat::~trasnMat(){
    cout << "Finalizando....." << endl;
}

void trasnMat::getMat() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Ingrese un numero \n";
            cin >> matUser[i][j];
            trasnMat0[i][j] = matUser[i][j];
        }
    }
}

void trasnMat::printResult() {
    cout << "Su matriz sin ordenar: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << " [" << matUser[i][j] << "] ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Su matriz transpuesta es: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << " [" << trasnMat0[j][i] << "] ";
        }
        cout << endl;
    }
    cout << endl;
}


int main() {
    trasnMat alpha;
    alpha.getMat();
    alpha.printResult();

    return 0;
}