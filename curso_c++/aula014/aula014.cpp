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
Se usa o loop while quando voc� n�o tem um n�mero determinado de vezes para rodar o loop, quando voc� n�o conhece uma condi��o de parada, ou � indeterminado quantas vezes o loop deve repetir.

O while executa o bloco de comandos enquanto a condi��o for satisfeita

se usar o cin para conseguir o valor pelo teclado, voc� tera que escrever qualquer valor que quiser at� chegar no valor m�ximo ou passar dele
*/
