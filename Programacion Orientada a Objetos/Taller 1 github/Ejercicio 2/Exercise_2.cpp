/* Ejercicio 2.: Haga un programa en C que lea dos números enteros (m,n), hallar la sumatoria desde 'm' hasta 'n',
halle la cantidad de números pares y diga cuáles son, halle la cantidad de números impares y diga cuáles son,
que diga  el total de números desde 'm' hasta 'n'. (eje. m= 3 y n = 6. la sumatoria desde 3 hasta 6  es = 18,
hay dos números pares (4 y 6), hay dos números impares (3 y 5) y hay en total 4 números entre 3 y 6. */

#include <iostream>
using namespace std;
int num1 = 0, num2 = 0, numbersEven = 0, numberOdd = 0;

void getNums(){
    cout << "Digite un numero: " << endl;
    cin >> num1;

    cout << "Digite otro numero: " << endl;
    cin >> num2;

    cout << endl;
}

void summationNumToNum(int x, int y){
    int summation = 0;
    for (int i = x; i <= y; ++i) {
        summation = summation + i;
    }
    cout << "La sumatoria de " << x << " hasta " << y << " es: " << summation << endl;
    cout << endl;
}

void getEvenNumber(int x, int y){
    for (int i = x; i <= y; ++i) {
        if(i%2 == 0){
            cout << i << " es un numero par." << endl;
        } else {
            cout << i << " es un numero impar." << endl;
        }
    }
    cout << endl;
}

void getTotalEvenOrOddNumbers(int x, int y){
    for (int i = x; i <= y; ++i) {
        if(i%2 == 0){
            numbersEven++;
        } else {
            numberOdd++;
        }
    }
    cout << "La sumatoria de " << x << " hasta " << y << " tiene " << numbersEven << " numeros par. " << endl;
    cout << "La sumatoria de " << x << " hasta " << y << " tiene " << numberOdd << " numeros impar. " << endl;
    cout << endl;
}

int main(){

    getNums();

    if(num1 > num2){
        summationNumToNum(num2,num1);
        getEvenNumber(num2,num1);
        getTotalEvenOrOddNumbers(num2,num1);
    } else if (num2 > num1){
        summationNumToNum(num1,num2);
        getEvenNumber(num1,num2);
        getTotalEvenOrOddNumbers(num1,num2);
    }

    return 0;
}