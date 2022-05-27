// Jhonattan Aponte - 20212578062 - Gr.303
#include <iostream>
using namespace std;

class exercise{
    private:
        int numUser0 = 0, numUser1 = 0, numWithMoreDivisors = 0, maximunDivisors = 0, count0 = 0, count1 = 0;
    public:
        void getUserNumbers();
        void divisors();
        void getNumberWithMoreDivisors();
};

void exercise::getUserNumbers() {
    cout << "Ingrese un numero." << endl;
    cin >> numUser0;

    cout << "Ingrese otro numero." << endl;
    cin >> numUser1;
}

void exercise::divisors() {
    cout << "Los divisores de " << numUser0 << " son: ";
    for(int i = 1; i <= numUser0; i++){
        if(numUser0 % i == 0){
            cout << " [" << i << "] ";
            count0++;
        }
    }
    cout << "\nLos divisores de " << numUser1 << " son: ";
    for(int i = 1; i <= numUser1; i++){
        if(numUser1 % i == 0){
            cout << " [" << i << "] ";
            count1++;
        }
    }
}

void exercise::getNumberWithMoreDivisors() {
    if(count0 > count1){
        numWithMoreDivisors = numUser0;
        maximunDivisors = count0;
    } else if (count1 > count0) {
        numWithMoreDivisors = numUser1;
        maximunDivisors = count1;
    }
    cout << "\nEl numero con mas divisores es: [" << numWithMoreDivisors << "] " << endl;
    cout <<"Tiene un total de [" << maximunDivisors << "] divisores." << endl;
}

int main(){
    exercise alpha;
    alpha.getUserNumbers();
    alpha.divisors();
    alpha.getNumberWithMoreDivisors();

    return 0;
}