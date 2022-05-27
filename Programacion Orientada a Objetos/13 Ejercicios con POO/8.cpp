/*Jhonattan Aponte - 20212578062
Hacer un programa en C++ que calcule la paradoja del cumpleaños.*/

#include <iostream>
using namespace std;

class happyBrithDay{
    private:
        int quantityPeople;
        float noBirth, probablityBirth;
    public:
        void getBirth();
        void isABirthToo();
        void printResult();
};

void happyBrithDay::getBirth() {
    cout << "Digite el numero de personas \n";
    cin >> quantityPeople;
}

void happyBrithDay::isABirthToo() {
    probablityBirth = 1.0;
    for(int i = 0; i < quantityPeople; i++){
        probablityBirth = probablityBirth * ((365.0 - i) / 365);
        noBirth = probablityBirth;
    }
    probablityBirth = 100 * ( 1 - probablityBirth);
}

void happyBrithDay::printResult(){
    cout << "No cumplen el mismo dia " << noBirth * 100 << "%" << endl;
    cout << "Para " << quantityPeople << " personas existe una probabilidad de " << probablityBirth << "%" << endl;
    cout << "para que dos personas cumplan el mismo dia \n";
}

int main() {
    happyBrithDay alpha;
    alpha.getBirth();
    alpha.isABirthToo();
    alpha.printResult();

    return 0;
}
