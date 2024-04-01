#include <iostream>

using namespace std;

int main() {

	int matriz[3][4];
	int linha, coluna;

	for(linha = 0; linha < 3; linha++) {
        for(coluna = 0; coluna < 4; coluna++){
            cin >> matriz[linha][coluna];
        }
	}

    for(linha = 0; linha < 3; linha++) {
        for(coluna = 0; coluna < 4; coluna++){
            cout << matriz[linha][coluna] << " ";
        }
        cout << endl;
	}

	return 0;
}

/*
Pegando o valor de cada posição da matriz, pelo teclado
*/
