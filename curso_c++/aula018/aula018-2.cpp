#include <iostream>

using namespace std;

int main() {

	int vetor[7], i;

	vetor[0] = 10;
	vetor[1] = 20;
	vetor[2] = 30;
	vetor[3] = 40;
	vetor[4] = 50;
	vetor[5] = 60;
	vetor[6] = 70;

	for(i=0; i < sizeof(vetor) / 4; i++) {
        cout << vetor[i] << endl;
	}

	return 0;
}

/*
o loop for j� ajuda mt certo? mas e se eu mudar o n�mero de vetores, de [5] para [10], e imagine se eu querer mudar mais vezes o n�mero de vetores, teria que mudar o valor de 'i' toda hora certo? ent�o vamos facilitar mais a inda nossa vida, usando 'sizeof()', mas cuidado que se colocar apenas o sizeof() ele mostrar� o tamanho do bit (int = 4) e como o vetor tem uma certa quantidade (neste caso s�o 5 escpa�os) fica como 5 vari�veis, com 5 valores em int, ent�o para n�o dar erro, difivita o sizeof(vetor) por 4(tamanho do int) para mostrar o valor de cada vari�vel, mesmo que mude o tanto de arrays
*/
