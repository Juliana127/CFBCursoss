#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int ano; char nome[10];

    printf("Digite seu nome: ");
    scanf("%s",&nome);
    printf("Digite seu ano de aniversario: ");
	scanf("%d",&ano);
	printf("\nNome: %s e ano de aniversario: %d\n", nome, ano);

	return 0;
}
