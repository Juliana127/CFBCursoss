#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
    srand(time(NULL));  // Inicializa o gerador de números aleatórios com a hora atual
    int x;  // Gera um número aleatório entre 0 e 9

    do{
        x = rand() % 10;
    if (x == 3) {
        cout << "Consegui!" << endl;
        cout << "Numero gerado: " << x << endl;
    } else {
        cout << "Nao deu." << endl;
        cout << "Numero gerado: " << x << endl;
    }
    }while(x != 3);

    system("pause");
    return 0;
}
