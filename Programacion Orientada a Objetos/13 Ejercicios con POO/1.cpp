// Jhonattan Aponte 20212578062 gr 303.
/* Leer una cadena (arreglo char)y pasarla a minúsculas/mayúsculas según corresponda
 * (eje. HolaMundo:  hOLA mUNDO). Abstenerse de usar las funciones de string.h ‘A’ ‘a’*/
#include <iostream>
using namespace std;

class changeWord{
    private:
        char phrase[200];
    public:
        void getPhrase();
        void getUppercase();
        void printProcess();
};

void changeWord::getPhrase() {
    cout << "ingrese una frase a eleccion " << endl;
    cin.getline(phrase, 200, '\n');
}

void changeWord::getUppercase() {
    for (int i = 0; i < 200; i++){
        if(phrase[i] >= 65 && phrase[i] <= 90){
            phrase[i] = phrase[i] + 32;
        }else if(phrase[i] >= 97 && phrase[i] <= 122){
            phrase[i] = phrase[i] - 32;
        }
    }
}

void changeWord::printProcess(){
    cout << "\nSu frase cambiada es: \n\n'" << phrase << "' " << endl;
};

int main(){
    changeWord alpha;
    alpha.getPhrase();
    alpha.getUppercase();
    alpha.printProcess();

    return 0;
}

