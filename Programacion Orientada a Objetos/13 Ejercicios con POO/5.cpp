/*
Jhonattan Aponte - 20212578062 - gr303
Leer un arreglo de números y ordenarlos de menor a mayor
*/
#include <iostream>
using namespace std;

class arrayMeToMa{
    private:
        int vecUser[5];
        int vecUser0[5];
    public:
        arrayMeToMa();
        ~arrayMeToMa();
        void getVector();
        void orderVec();
        void printResult();
};
arrayMeToMa::arrayMeToMa(){
    cout << "Iniciando....." << endl;
}

arrayMeToMa::~arrayMeToMa(){
cout << "Finalizando....." << endl;
}

void arrayMeToMa::getVector() {
    for(int i = 0; i < 5; i++){
        cout << "ingrese un numero" << endl;
        cin >> vecUser[i];
        vecUser0[i] = vecUser[i];
    }
}

void arrayMeToMa::orderVec() {
    int support;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5 - 1; j++){
            if(vecUser[j] > vecUser[j + 1]){
                support = vecUser[j];
                vecUser[j] = vecUser[j + 1];
                vecUser[j + 1] = support;
            }
        }
    }
}

void arrayMeToMa::printResult() {
    cout << "Su vector ordenado de menor a mayor numero es: \n";
    for(int i = 0; i < 5; i++){
        cout << " [" << vecUser[i] << "] ";
    }
    cout << endl;
    cout << "Su vector sin ordenar es: \n";
    for(int i = 0; i < 5; i++){
        cout << " [" << vecUser0[i] << "] ";
    }
    cout << endl;
}


int main() {
    arrayMeToMa alpha;
    alpha.getVector();
    alpha.orderVec();
    alpha.printResult();

    return 0;
}
