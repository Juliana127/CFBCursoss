#include <iostream>

using namespace std;

int main() {

    int n = 0;

        while(n <= 10) {
            cout << n << endl;
            n++; //sem isso, cria um loop infinito *0*
        }

        cout << endl << "Rotina finalizada" << endl;

	return 0;
}

/*
Se usa o loop while quando você não tem um número determinado de vezes para rodar o loop, quando você não conhece uma condição de parada, ou é indeterminado quantas vezes o loop deve repetir.

O while executa o bloco de comandos enquanto a condição for satisfeita

se usar o cin para conseguir o valor pelo teclado, você tera que escrever qualquer valor que quiser até chegar no valor máximo ou passar dele
*/
