//Jhonattan Aponte - 20212578062 - Gr.303
#include <iostream>
using namespace std;

class exersice{
    private:
        char phrase[200];
    public:
        void getPhrase();
        void vocalCount();
        void positionVocal();
};

void exersice::getPhrase() {
    cout << "ingrese una frase" << endl;
    cin.getline(phrase, 200, '\n');
}

void exersice::vocalCount() {
    int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;
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
    cout << "Tu frase '" << phrase << "', tiene: " << endl;
    cout << " [" << vocal_a << "], vocales A." << endl;
    cout << " [" << vocal_e << "], vocales E." << endl;
    cout << " [" << vocal_i << "], vocales I." << endl;
    cout << " [" << vocal_o << "], vocales O." << endl;
    cout << " [" << vocal_u << "], vocales U." << endl;
}

void exersice::positionVocal() {
    cout << "[A] esta en la posicion: ";
    for(int i = 0; i < 200; i++){
        if(phrase[i] == 'a' || phrase[i] == 'A'){
             cout << " " << i << " ";
        }
    }
    cout << endl;
    cout << "[E] esta en la posicion: ";
    for(int i = 0; i < 200; i++){
        if(phrase[i] == 'e' || phrase[i] == 'E'){
            cout << " " << i << " ";
        }
    }
    cout << endl;
    cout << "[I] esta en la posicion: ";
    for(int i = 0; i < 200; i++){
        if(phrase[i] == 'i' || phrase[i] == 'I'){
            cout << " " << i << " ";
        }
    }
    cout << endl;
    cout << "[O] esta en la posicion: ";
    for(int i = 0; i < 200; i++){
        if(phrase[i] == 'o' || phrase[i] == 'O'){
            cout << " " << i << " ";
        }
    }
    cout << endl;
    cout << "[U] esta en la posicion: ";
    for(int i = 0; i < 200; i++){
        if(phrase[i] == 'u' || phrase[i] == 'U'){
            cout << " " << i << " ";
        }
    }
    cout << endl;
}

int main() {
    exersice alpha;
    alpha.getPhrase();
    alpha.vocalCount();
    alpha.positionVocal();

    return 0;
}
