#include <iostream>

using namespace std;

int main() {

	int tamanho = 10;
	int vetor[tamanho];

	vetor[0] = 10;
	vetor[1] = 20;
	vetor[2] = 30;
	vetor[3] = 40;
	vetor[4] = 50;
	vetor[5] = 60;
	vetor[6] = 70;
	vetor[7] = 80;
	vetor[8] = 90;
	vetor[9] = 100;

	for(int i=0; i < tamanho; i++) {
        cout << vetor[i] << endl;
	}

	return 0;
}

/*
desta forma, você não precisa usar o sizeof(), pode apenas mudar o valor de 'tamanho' e adicionar mais 'vetores', o 'i' continua sendo necessario
*/
