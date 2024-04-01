#include <iostream>

using namespace std;

int main() {
    int inteiro = 0;
    char letra = 'A';
    //double decimal = 5.2;
    float decimal2 = 5.2;
    bool verdade = false;
    string texto;

    cout << "Digite seu nome: ";
    cin >> texto;

    cout << "Digite sua idade: ";
    cin >> inteiro;

    cout << "Digite uma letra: ";
    cin >> letra;

    cout << "Digite um numero real: ";
    cin >> decimal2;

    cout << "Digite verdadeiro ou falso: ";
    cin >> verdade;


    cout << "\nOs dados digitados sao: " << endl << inteiro << endl << letra << endl << decimal2 << endl << verdade << endl << texto << endl;

    return 0;
}
