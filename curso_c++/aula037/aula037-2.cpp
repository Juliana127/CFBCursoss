#include <iostream>

using namespace std;

int main() {

	int *ponteiro;
	int vetor[5];

	ponteiro = &vetor[0];

	*ponteiro = 10; //adicionar um valor a primeira posi��o do array, j� q o vetor acima esta na posi��o 0
	cout << vetor[0] << endl;

	*(ponteiro++);
	*ponteiro = 20; //vetor[1] = 20;
	cout << vetor[1] << endl;

	return 0;
}
