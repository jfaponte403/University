/* Ejercicio 1.: Haga un programa en C que lea un arreglo tipo char y diga cuantas vocales tiene
 * (mayúsculas -  minúsculas) y su posición dentro del arreglo.
 * (eje. H o l a  M u n d o  A l e g r e: 2 vocales 'A' en posicon 3 y 11, etc; contando desde cero).
 * Se debe imprimir la frase que entró y los resultados obtenidos. */

#include <iostream>
using namespace std;

char phrase[200];
char vocal_a1 = 'a', vocal_e1 = 'e', vocal_i1 = 'i', vocal_o1 = 'o', vocal_u1 = 'u';
char vocal_A1 = 'A', vocal_E1 = 'E', vocal_I1 = 'I', vocal_O1 = 'O', vocal_U1 = 'U';
int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;

void phrasePositionVocal(char word){
    for(int i = 0; i < 200; i++){
        if(phrase[i] == word){
            cout << word <<" Esta en la posicion: " << i << endl;
        }
    }
}

void getPharse(){
    cout << "ingrese una frase" << endl;
    cin.getline(phrase, 200, '\n');
    cout << "Tu frase es: " << phrase << endl;
}

void vocalCount(){
    for(int i = 0; i < 200; i++){
        switch (phrase[i]) {
            case 'a': vocal_a++;
                break;
            case 'e': vocal_e++;
                break;
            case 'i': vocal_i++;
                break;
            case 'o': vocal_o++;
                break;
            case 'u': vocal_u++;
                break;

            case 'A': vocal_a++;
                break;
            case 'E': vocal_e++;
                break;
            case 'I': vocal_i++;
                break;
            case 'O': vocal_o++;
                break;
            case 'U': vocal_u++;
                break;
        }
    }
}

int main(){

    getPharse();

    vocalCount();

    cout << endl;
    cout << "Cantidad de vocales a: " << vocal_a << endl;
    phrasePositionVocal(vocal_a1);
    phrasePositionVocal(vocal_A1);

    cout << endl;
    cout << "Cantidad de vocales e: " << vocal_e << endl;
    phrasePositionVocal(vocal_e1);
    phrasePositionVocal(vocal_E1);

    cout << endl;
    cout << "Cantidad de vocales i: " << vocal_i << endl;
    phrasePositionVocal(vocal_I1);
    phrasePositionVocal(vocal_i1);

    cout << endl;
    cout << "Cantidad de vocales o: " << vocal_o << endl;
    phrasePositionVocal(vocal_o1);
    phrasePositionVocal(vocal_O1);

    cout << endl;
    cout << "Cantidad de vocales u: " << vocal_u << endl;
    phrasePositionVocal(vocal_u1);
    phrasePositionVocal(vocal_U1);

    return 0;
}