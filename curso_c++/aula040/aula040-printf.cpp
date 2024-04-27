#include <iostream>
#include <stdio.h> //para usar 'printf' e 'scanf'

using namespace std;

int main() {

    int n1 = 1, n2 = 10, n3 = 100;
    char nome[6]="Bruno"; //5 letras, 1 finalização de string
    //char nome[5]={'B','r','u','n','o'};

	//cout << "Imprimindo estilo C++" << endl;
	//printf("Imprimindo estilo C\n");
	//printf("Canal Fessor\0 Bruno");

	//printf("Valor da variavel n1: %d\n",n1); //o '%d' é para colocar no seu lugar o valor da variável, no caso de 'n1', é uma referencia

	printf("Valor das variaveis: %d %d %d\n", n1, n2, n3); //é imprimido respectivamente, se é o primeiro '%d' então é 'n1'
	printf("Nome: %s\n",nome);

	return 0;
}

/*
alternativas para 'cin' e 'cout' são respectivamente 'scanf' e 'printf'

CHAVES DO C:
d, i - variáveis inteiras
x, X - Hexadecimal (1 a 9, A a F = 15)
u - int sem sinal (- (menos))
s - string, char*
f - float, double
p - ponteiros
*/
