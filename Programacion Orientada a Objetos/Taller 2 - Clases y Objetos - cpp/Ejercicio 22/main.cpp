#include <iostream>
using namespace std;

class exercise {
    private:
        int userNumber0 = 0, userNumber1 = 0;
    public:
        void getNumbers();
        void summationNumToNum();
        void getEvenNumber();
        void getTotalEvenOrOddNumbers();
};

void exercise::getNumbers() {
    cout << "Digite un numero: " << endl;
    cin >> userNumber0;
    cout << "Digite otro numero: " << endl;
    cin >> userNumber1;
    cout << endl;
}

void exercise::summationNumToNum() {
    if(userNumber0 > userNumber1){
        int aux = -1;
        int summation = 0;
        for (int i = userNumber1; i <= userNumber0; ++i) {
            summation = summation + i;
            aux++;
        }
        cout << "La sumatoria de " << userNumber1 << " hasta " << userNumber0 << " es: " << summation << endl;
        cout << "Hay un total de: " << aux << " numeros desde " << userNumber1 << " hasta " << userNumber0 << endl;
        cout << endl;
    }else {
        int summation = 0;
        int aux = -1;
        for (int i = userNumber0; i <= userNumber1; ++i) {
            summation = summation + i;
            aux++;
        }
        cout << "La sumatoria de " << userNumber0 << " hasta " << userNumber1 << " es: " << summation << endl;
        cout << "Hay un total de: " << aux << " numeros desde " << userNumber0 << " hasta " << userNumber1 << endl;
        cout << endl;
    }
}

void exercise::getEvenNumber() {
    if(userNumber0 > userNumber1){
        for(int i = userNumber1; i < userNumber0; i++){
            if(i%2 == 0){
                cout << i << " es un numero par." << endl;
            } else {
                cout << i << " es un numero impar." << endl;
            }
        }
    } else {
        for(int i = userNumber0; i < userNumber1; i++){
            if(i%2 == 0){
                cout << i << " es un numero par." << endl;
            } else {
                cout << i << " es un numero impar." << endl;
            }
        }
    }
    cout << endl;
}

void exercise::getTotalEvenOrOddNumbers() {
    int numberOdd = 0, numbersEven = 0;
    if(userNumber0 > userNumber1){
        for(int i = userNumber1; i < userNumber0; i++){
            if(i%2 == 0){
                numbersEven++;
            } else {
                numberOdd++;
            }
        }
        cout << "La sumatoria de " << userNumber1 << " hasta " << userNumber0 << " tiene " << numbersEven << " numeros par. " << endl;
        cout << "La sumatoria de " << userNumber1 << " hasta " << userNumber0 << " tiene " << numberOdd << " numeros impar. " << endl;
        cout << endl;
    } else {
        for(int i = userNumber0; i < userNumber1; i++){
            if(i%2 == 0){
                numbersEven++;
            } else {
                numberOdd++;
            }
        }
        cout << "La sumatoria de " << userNumber0 << " hasta " << userNumber1 << " tiene " << numbersEven << " numeros par. " << endl;
        cout << "La sumatoria de " << userNumber0 << " hasta " << userNumber1 << " tiene " << numberOdd << " numeros impar. " << endl;
        cout << endl;
    }

}

int main() {
    exercise alpha;
    alpha.getNumbers();
    alpha.summationNumToNum();
    alpha.getEvenNumber();
    alpha.getTotalEvenOrOddNumbers();

    return 0;
}
