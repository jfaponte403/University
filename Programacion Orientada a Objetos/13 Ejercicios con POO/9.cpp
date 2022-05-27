/*Jhonattan Aponte - 20212578062
Hacer un programa que calcule el factorial de un número dado (iterativo y recursivo)*/

#include <iostream>
using namespace std;

class factirial{
    private:
        int numUser, result;
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
    cout << "Digite un numero para calcular su facotiral \n";
    cin >> numUser;
}

void factirial::factorial(){
    for(int i = 1; i <= numUser; i++){
        result = result * i;
    }
}

void factirial::printResult(){
    cout << "El factorial de [" << numUser << "] es: " << " [" << result << "] " << endl;
}

int main() {
    factirial alpha;
    alpha.getNumuser();
    alpha.factorial();
    alpha.printResult();

    return 0;
}
