#include <iostream>
#include <stdio.h> //para usar 'printf' e 'scanf'

using namespace std;

int main() {

    int n1 = 1, n2 = 10, n3 = 100;
    char nome[6]="Bruno"; //5 letras, 1 finaliza��o de string
    //char nome[5]={'B','r','u','n','o'};

	//cout << "Imprimindo estilo C++" << endl;
	//printf("Imprimindo estilo C\n");
	//printf("Canal Fessor\0 Bruno");

	//printf("Valor da variavel n1: %d\n",n1); //o '%d' � para colocar no seu lugar o valor da vari�vel, no caso de 'n1', � uma referencia

	printf("Valor das variaveis: %d %d %d\n", n1, n2, n3); //� imprimido respectivamente, se � o primeiro '%d' ent�o � 'n1'
	printf("Nome: %s\n",nome);

	return 0;
}

/*
alternativas para 'cin' e 'cout' s�o respectivamente 'scanf' e 'printf'

CHAVES DO C:
d, i - vari�veis inteiras
x, X - Hexadecimal (1 a 9, A a F = 15)
u - int sem sinal (- (menos))
s - string, char*
f - float, double
p - ponteiros
*/
