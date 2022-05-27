/*Jhonattan Aponte - 20212578062 Gr303
Leer un número y decir si es cubo perfecto (eje. 153: las sumatoria de sus cifras al cubo son
iguales al número; 1^3+ 5^3+ 3^3= 153.*/

#include <iostream>
#include <math.h>
using namespace std;

class perfectCube {
private:
    bool state = false;
    int numUser0 = 0, count = 0;
    double total = 0;
    int vecNumUser0[];
public:
    perfectCube();
    ~perfectCube();
    void getNumUser();
    void isCubePerfect();
    void printResult();
};

void perfectCube::getNumUser(){
    cout << "Ingrese el numero para descubir si es cubo perfecto. \n";
    cin >> numUser0;
}

void perfectCube::isCubePerfect(){
    int aux0 = numUser0, result = numUser0;
    do {
        result = aux0 % 10;
        aux0 = aux0 / 10;
        vecNumUser0[count] = result;
        count++;
    } while (result != 0);

    for(int i = count - 1; i >= 0; i--){
        total = total + pow(vecNumUser0[i], 3);
        cout << "total = " << total << endl;
    }

    if(numUser0 == total){
        state = true;
    } else {
        state = false;
    }
}

void perfectCube::printResult(){
    cout << "Su numero es: [" << numUser0 << "] \n";
    cout << "Tiene estos digitos: ";
    for (int i = count - 1; i >= 0; i--){
        cout << " [" << vecNumUser0[i] << "] ";
    }
    cout << endl;
    if(state){
        cout << "Su numero: [" << numUser0 << "], es cubo perfecto \n";
        cout << "Su resultado es: " << total << endl;
    } else {
        cout << "Su numero es: [" << numUser0 << "], no es cubo perfecto \n";
        cout << "Su resultado es: " << total << endl;
    }
}

perfectCube::perfectCube() {
    cout << "Iniciando..." << endl;
}

perfectCube::~perfectCube() {
    cout << "Finalizando..." << endl;
}

int main() {
    perfectCube alpha;
    alpha.getNumUser();
    alpha.isCubePerfect();
    alpha.printResult();

    return 0;
}
