//Quiz pin8 Jhonattan Aponte - 20212578062
#include <iostream>
#define pin8 8
#define tamVectorBandidas 6

using namespace std;

void printVec(char vec[tamVectorBandidas]){
    for (int i = 0; i < tamVectorBandidas; ++i) {
        cout << " [" << vec[i] << "] ";
    }
    cout << endl;
}

int main() {
    char bandidas[tamVectorBandidas] = {'A','B','C','D','E','F'};
    int posActual = 0;
    int countMain = 0;
    char result;
    
    cout << "Bandidas: \n";
    printVec(bandidas);

    cout << "Inicio.... \n";
    for (int i = 0; i < tamVectorBandidas - 1; ++i) {
        while (bandidas[posActual] == 0){
            posActual++;
        }
        for (int j = 0; j < pin8; ++j) {
            posActual++;
            if (posActual >= tamVectorBandidas){
                posActual = 0;
            }
        }
        while (bandidas[posActual] == 0){
            posActual++;
            if (posActual >= 6){
                posActual = 0;
            }
        }
        cout << " posActual == " << posActual << endl;
        bandidas[posActual] = 0;
        printVec(bandidas);
    }
    for (int i = 0; i < tamVectorBandidas; i++){
        if(bandidas[i] != 0){
            result = bandidas[i];
        }
    }

    cout << "Debera carse con: " << result << endl;
    return 0;
}
