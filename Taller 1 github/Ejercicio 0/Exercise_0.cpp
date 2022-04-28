/*
Haga un programa en C que lea dos números y halle los divisores de cada uno, que diga cuál tiene más divisores
(eje. 8 y 9; los divisores de 8: 1,2,4,y 8; 8 tiene 4 divisores.  Los divisores de 9: 1,3 y 9; 9 tiene 3 divisores.
Ocho tiene más divisores que 9).
Se debe imprimir los datos entrados y los resultados obtenidos.
*/

#include <iostream>
using namespace std;

int nMayor = 0;
int nMayor1 = 0;

void divisores(int num1){
    int count1 = 0;
    cout << "divisores de " << num1 << " son: ";
    for(int i = 1; i <= num1; i++){
        if(num1 % i == 0){
            cout << " " << i;
            count1++;
        }
    }
    cout << endl;
    cout << num1 << " tiene " << count1 << " divisores" << endl;
    cout << endl;

    if(nMayor < count1){
        nMayor = count1; //divisors
        nMayor1 = num1; //num
    }
}

int main() {
    cout << "Digit a number 1" << endl;
    int num1 = 0;
    cin >> num1;


    cout << "Digit a number 2" << endl;
    int num2 = 0;
    cin >> num2;

    divisores(num1);
    divisores(num2);

    cout << "---------" << endl;
    cout << num1 << " Es el numero con mayor divisores." << endl;

    return 0;
}

