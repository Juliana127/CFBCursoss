#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int n1;
	string nome;

	printf("Escreva um numero e um nome: ");
	scanf("%d %s", &n1, &nome); //no scanf deve-se informar o endere�o (&)

	printf("\nNumero e: %d\nNome: %s\n", n1, nome);

	return 0;
}
