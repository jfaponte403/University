/*Jhonattan Aponte - 20212578062
Hacer un programa que calcule los factoriales desde m hasta n.*/

#include <iostream>
using namespace std;

class factirial{
private:
    int numUser, numUser0, aux, result;
public:
    factirial();
    ~factirial();
    void getNumuser();
    void factorial();
    void printResult();
};

factirial::factirial(){
    cout << "iniciando... \n\n";
}

factirial::~factirial(){
    cout << "\n\n finalizando... ";
}

void factirial::getNumuser(){
    cout << "Digite un numero \n";
    cin >> numUser;
    cout << "Digite un numero para calcular su factorial desde (" << numUser << ") \n";
    cin >> numUser0;
}

void factirial::factorial(){
    if(numUser > numUser0){
        aux = numUser;
        numUser = numUser0;
        numUser0 = aux;
    }
    for(int i = numUser; i <= numUser0; i++){
        result = result * i;
    }
}

void factirial::printResult(){
    cout << "El factorial de [" << numUser << "] hasta [" << numUser0 << "] " << endl;
    cout << "Es: [" << result << "] " << endl;
}

int main() {
    factirial alpha;
    alpha.getNumuser();
    alpha.factorial();
    alpha.printResult();

    return 0;
}

