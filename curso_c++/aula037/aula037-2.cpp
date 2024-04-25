#include <iostream>

using namespace std;

int main() {

	int *ponteiro;
	int vetor[5];

	ponteiro = &vetor[0];

	*ponteiro = 10; //adicionar um valor a primeira posição do array, já q o vetor acima esta na posição 0
	cout << vetor[0] << endl;

	*(ponteiro++);
	*ponteiro = 20; //vetor[1] = 20;
	cout << vetor[1] << endl;

	return 0;
}
