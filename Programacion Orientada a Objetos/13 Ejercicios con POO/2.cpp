// Jhonattan Aponte - 20212578062 - Gr303.
/*Leer una cadena e imprimir su equivalente en decimal y en binario
 * (eje. A  vale 65 y en binario es 1000001 o si entra avale 97 y en binario 1100001).*/

#include <iostream>
using namespace std;

class normalToBinary {
    private:
        int numUser0 = 0, aux = 0, result[10], numUser1 = 0;
    public:
        normalToBinary();
        ~normalToBinary();
        void getNumberUser();
        void convertBinary();
        void printResult();
};

normalToBinary::normalToBinary(){
    cout << "Iniciando.." << endl;
}

normalToBinary::~normalToBinary(){
    cout << "Finalizando.." << endl;
}

void normalToBinary::getNumberUser(){
    cout << "Digite el numero que desea convertir a binario: " << endl;
    cin >> numUser0;
}

void normalToBinary::convertBinary(){
    numUser1 = numUser0;
    for(int i = 0; i < 10; i++){
        result[i] = numUser0 % 2;
        numUser0 /= 2;
        aux++;
    }
}

void normalToBinary::printResult() {
    cout << "Numero en decimal: [" << numUser1 << "] " << endl;
    cout << "Numero en binario: [";
    for(int i = aux - 1; i >= 0; i--){
        cout << result[i];
    }
    cout << "] " << endl;
}
int main() {
    normalToBinary alpha;
    alpha.getNumberUser();
    alpha.convertBinary();
    alpha.printResult();
    return 0;
}
