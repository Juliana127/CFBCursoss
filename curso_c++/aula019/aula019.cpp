#include <iostream>

using namespace std;

int main() {
            //uni/bi
	int matriz[3][4];
	int linha, coluna;

	//Primeira linha:
	matriz[0][0] = 0;
	matriz[0][1] = 0;
	matriz[0][2] = 0;
	matriz[0][3] = 0;

	//Segunda linha:
	matriz[1][0] = 1;
	matriz[1][1] = 1;
	matriz[1][2] = 1;
	matriz[1][3] = 1;

	//Terceira linha:
	matriz[2][0] = 2;
	matriz[2][1] = 2;
	matriz[2][2] = 2;
	matriz[2][3] = 2;

    cout << "Minha Matriz:" << endl;

	for(linha = 0; linha < 3; linha++) { //para passar por casa linha da matriz
        for(coluna = 0; coluna < 4; coluna++) { //passa por cada coluna da matriz
            cout << matriz[linha][coluna] << " ";
        }
        cout << endl; //para ficar no formato de matriz, caso n tenha isso fica tudo sendo imprimido na mesma linha no programa
	}

	return 0;
}

/*
uma matriz é nada mais nada menos que um array bidimensional
vamos dizer que a array é apenas a uma linha, e quando fazemos uma matriz, juntamos essas linhas, e se for uma matriz de [3][4] = [linhas][colunas] será disposto como vc já sabe, no formato de matriz
*/
