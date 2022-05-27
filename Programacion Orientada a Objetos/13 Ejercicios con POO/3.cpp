/*Jhonattan Aponte - 20212578062 - Gr 303.
Leer un número y decir si es perfecto (eje. 6: sus divisores son: 1,2,3 y la suma es = 6. El número
es perfecto)*/

#include <iostream>
using namespace std;

class getNumPerfect {
    private:
        bool isPerfect = false;
        int numUser0 = 0, aux = 0, count0 = 0;
        int vecResult[];
    public:
        getNumPerfect();
        ~getNumPerfect();
        void getNumUser();
        void isNumUserPerfect();
        void printResult();
};

getNumPerfect::getNumPerfect(){
    cout << "Inciando..." << endl;
}

getNumPerfect::~getNumPerfect(){
    cout << "Finalizando.." << endl;
}

void getNumPerfect::getNumUser(){
    cout << "Digita un numero para descubir si es perfecto." << endl;
    cin >> numUser0;
}

void getNumPerfect::isNumUserPerfect(){
    for(int i = 1; i <= numUser0; i++){
        if(numUser0 % i == 0){
            vecResult[aux] = i;
            aux++;
        }
    }
    for(int i = 1; i < numUser0; i++){
        if(numUser0 % i == 0){
            count0 = count0 + i;
        }
    }
    if(count0 == numUser0){
        isPerfect = true;
    } else {
        isPerfect = false;
    }
}

void getNumPerfect::printResult() {
    cout << "divisores de " << numUser0 << " son: ";
    for(int i = 0; i < aux; i++){
         cout << " [" << vecResult[i] << "] ";
    }
    cout << endl;
    if(isPerfect){
        cout << "El numero: [" << numUser0 << "], es perfecto." << endl;
    } else {
        cout << "El numero: [" << numUser0 << "], NO ES PERFECTO." << endl;
    }
}

int main() {
    getNumPerfect alpha;
    alpha.getNumUser();
    alpha.isNumUserPerfect();
    alpha.printResult();

    return 0;
}
