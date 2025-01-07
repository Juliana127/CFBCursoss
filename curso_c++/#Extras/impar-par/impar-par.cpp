#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int num;

    cout << "Digite um numero entre 0 a 10: ";
    cin >> num;

    // Verifica se o n�mero est� dentro do intervalo permitido
    if (num < 0 || num > 10) {
        cout << "Numero fora do intervalo!" << endl;
    } else {
        // Verifica se o n�mero � par ou �mpar
        if (num % 2 == 0) {
            cout << "O numero " << num << " � par." << endl;
        } else {
            cout << "O numero " << num << " � impar." << endl;
        }
    }

    system("pause");
    return 0;
}
