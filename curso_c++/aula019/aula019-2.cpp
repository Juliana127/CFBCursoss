#include <iostream>

using namespace std;

int main() {

	int matriz[3][4];
	int linha, coluna;

	for(linha = 0; linha < 3; linha++) {
        for(coluna = 0; coluna < 4; coluna++) {
            matriz[linha][coluna]=linha; //desta forma, não precisa escrever cada um dos vetores na mão, assim fica de forma automatica (vinicius13 - farm de matriz)
        }
	}

	for(linha = 0; linha < 3; linha++) {
        for(coluna = 0; coluna < 4; coluna++) {
            cout << matriz[linha][coluna] << " ";
        }
        cout << endl;
	}

	return 0;
}
