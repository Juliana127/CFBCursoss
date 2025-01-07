#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int num;

    cout << "Digite um numero entre 0 a 10: ";
    cin >> num;

    // Verifica se o número está dentro do intervalo permitido
    if (num < 0 || num > 10) {
        cout << "Numero fora do intervalo!" << endl;
    } else {
        // Verifica se o número é par ou ímpar
        if (num % 2 == 0) {
            cout << "O numero " << num << " é par." << endl;
        } else {
            cout << "O numero " << num << " é impar." << endl;
        }
    }

    system("pause");
    return 0;
}
