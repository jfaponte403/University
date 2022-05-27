/*
Jhonattan Aponte - 20212578062 - gr303
Leer una matriz de números y ordenarla de mayor a menor
*/
#include <iostream>
using namespace std;

class matMaToMe{
private:
    int matUser[3][3], matUserOrder[3][3];
public:
    matMaToMe();
    ~matMaToMe();
    void getMat();
    void orderMat();
    void printResult();
};
matMaToMe::matMaToMe(){
    cout << "Iniciando....." << endl;
}

matMaToMe::~matMaToMe(){
    cout << "Finalizando....." << endl;
}

void matMaToMe::getMat() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Ingrese un numero \n";
            cin >> matUser[i][j];
            matUserOrder[i][j] = matUser[i][j];
        }
    }
}

void matMaToMe::orderMat() {
    int support;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int x = 0; x < 3; x++){
                for(int y = 0; y < 3; y++){
                    if(matUserOrder[i][j] > matUserOrder[x][y]){
                        support = matUserOrder[i][j];
                        matUserOrder[i][j] = matUserOrder[x][y];
                        matUserOrder[x][y] = support;
                    }
                }
            }
        }
    }
}

void matMaToMe::printResult() {
    cout << "Su matriz sin ordenar: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << " [" << matUser[i][j] << "] ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Su matriz ordenada es: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << " [" << matUserOrder[i][j] << "] ";
        }
        cout << endl;
    }
    cout << endl;
}


int main() {
    matMaToMe alpha;
    alpha.getMat();
    alpha.orderMat();
    alpha.printResult();

    return 0;
}
