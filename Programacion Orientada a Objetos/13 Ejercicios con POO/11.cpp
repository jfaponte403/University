/*Jhonattan Aponte - 20212578062
Hacer un programa que lea dos números y diga si son primos relativos.*/

#include <iostream>
using namespace std;

class numsCousin{
private:
    bool statueCousin;
    int numUser, numUser0, tamVecA, tamVecB, tamMajor;
    int vecA[5], vecB[5];
public:
    numsCousin();
    ~numsCousin();
    void getNumuser();
    void process();
    void printResult();
};

numsCousin::numsCousin(){
    cout << "iniciando... \n\n";
}

numsCousin::~numsCousin(){
    cout << "\n\n finalizando... ";
}

void numsCousin::getNumuser(){
    cout << "Digite un numero para conocer si es primo relativo\n";
    cin >> numUser;
    cout << "Digite un numero para conocer si es primo relativo\n";
    cin >> numUser0;
}

void numsCousin::process(){
    tamVecB = 0, tamVecA = 0;
    for (int i = 1; i <= numUser; ++i) {
        if(numUser % i == 0){
            vecA[tamVecA] = i;
            tamVecA++;
        }
    }
    for (int j = 1; j <= numUser0; ++j) {
        if(numUser0 % j == 0){
            vecB[tamVecB] = j;
            tamVecB++;
        }
    }

    if(tamVecA > tamVecB){
        tamMajor = tamVecA;
    } else {
        tamMajor = tamVecB;
    }

    for (int k = 1; k < tamMajor; ++k) {
        if(vecA[0] == vecB[0] && vecA[k] != vecB[k]){
            statueCousin = true;
            break;
        } else {
            statueCousin = false;
            break;
        }
    }
}

void numsCousin::printResult(){
    cout << "divisores de " << numUser << endl;
    for (int i = 0; i < tamVecA; ++i) {
        cout << vecA[i] << " ";
    }
    cout << endl;
    cout << "divisores de " << numUser0 << endl;
    for (int i = 0; i < tamVecB; ++i) {
        cout << vecB[i] << " ";
    }
    cout << endl;

    if(statueCousin){
        cout << numUser << " y " << numUser0 << " son primos relativos. \n";
    } else {
        cout << numUser << " y " << numUser0 << " NO son primos relativos. \n";
    }
}

int main() {
    numsCousin alpha;
    alpha.getNumuser();
    alpha.process();
    alpha.printResult();

    return 0;
}