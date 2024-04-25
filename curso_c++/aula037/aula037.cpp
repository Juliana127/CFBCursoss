#include <iostream>

using namespace std;

int main() {

	int *ponteiro; //ponteiro
	int vetor[10]; //array

	//ponteiro = vetor; //ponteiro recebe endere�o de mem�ria do primeiro elemento do array vetor
	ponteiro = &vetor[0];
	cout << ponteiro << endl;


	*(ponteiro++); //n preciso incrementar 4bytes, o pr�prio compilador se encarrega disso, e pd usar as outras formas de incremento
	cout << ponteiro << endl;


	return 0;
}

/*
pode ser escrito das duas formas, nenhuma das duas tera problema:
    ponteiro = vetor;
    ponteiro = &vetor[0];

-----------------------------------------------------------------------------
1� posi��o esta em: 0x61fee4
2� posi��o esta em: 0x61fee8
e assim por diante, Mas vamos responder o pq de 4 vai pra 8 e bla bla, o ponteiro e o array s�o do tipo inteiro, e o tipo inteiro tem 4 bytes, ou seja, outro inteiro adiciona mais 4bytes e outra mais 4bytes e assim por diantes

ponteiro = &vetor[2];
	cout << ponteiro << endl; //vai dar 'c' pois � hexadecimal ent�o 9, a, b, c

*/
