/*
Jhonattan Aponte 20212578062
Realice un programa que lee dos números y realice las operaciones básicas (+, -, *, %), se debe
utilizar un menú así:
Menú principal
1. Suma
2. Resta
3. Producto
4. División
5. Salir
 */

#include <iostream>
using namespace std;

class calculator {
    private:
        int opcUser, numUser0, numUser1, result;
    public:
        calculator();
        ~calculator();
        void getNums();
        void menu();
        void sum();
        void res();
        void div();
        void mul();
};

calculator::calculator(){
    cout << "Iniciando.... \n";
}

calculator::~calculator(){
    cout << "Finalizando.... \n";
}

void calculator::sum() {
    result = numUser0 + numUser1;
}

void calculator::res() {
    result = numUser0 - numUser1;
}

void calculator::div() {
    result = numUser0 / numUser1;
}

void calculator::mul() {
    result = numUser0 + numUser1;
}

void calculator::getNums(){
    cout << "ingrese un numero \n";
    cin >> numUser0;
    cout << "ingrese un numero \n";
    cin >> numUser1;
}

void calculator::menu(){
    do {
        cout << "\n\n\n";
        cout << "1. suma \n";
        cout << "2. Resta \n";
        cout << "3. Producto \n";
        cout << "4. Division \n";
        cout << "5. Salir \n";
        cout << "Ingrese la operacion deseada: \n";
        cin >> opcUser;

        switch (opcUser) {
            case 1:{
                cout << "Sumando.... \n";
                getNums();
                sum();
                cout << numUser0 << " + " << numUser1 << " = " << result << endl;
                break;
            }
            case 2:{
                cout << "Restando.... \n";
                getNums();
                res();
                cout << numUser0 << " - " << numUser1 << " = " << result << endl;
                break;
            }
            case 3:{
                cout << "Multiplicando.... \n";
                getNums();
                mul();
                cout << numUser0 << " x " << numUser1 << " = " << result << endl;
                break;
            }
            case 4:{
                cout << "Division.... \n";
                getNums();
                div();
                cout << numUser0 << " / " << numUser1 << " = " << result << endl;
                break;
            }
            case  5:{
                cout << "Gracias..." << endl;
            }
            default: {
                break;
            }
        }
    } while (opcUser != 5);
}

int main(){
    calculator alpha;
    alpha.menu();

    return 0;
}
