#include <iostream>

using namespace std;

int main() {

	int vetor[5];
	//int vetor0, vetor1, vetor2, vetor3, vetor4;   seri� tipo isso
    int i;


	vetor[0] = 10;
	vetor[1] = 20;
	vetor[2] = 30;
	vetor[3] = 40;
	vetor[4] = 50;
	//vetor[5] = 60;    cuidado pq esse �ndice n�o existe no tamanho do vetor

	for(i=0; i < 5; i++) {
        cout << vetor[i] << endl; //vamos dizer q o i puxou os valores do array, e a cada intera��o ele puxa um valor at� se satisfazer chegando a 5, desta forma sem precisar fazer um cout para cada vetor
	}

	return 0;
}

/*
Array = um determinado grupo de vari�veis, de mesmo tipo e nome, com valores diferentes cada uma
as arrays de preferencia devem tem um n�mero de quantidade declarado ( [5] ) para n�o dar problema com o programa (li que � mais seguro assim)
as arrays cmc pelo 0(zero), ent�o se for um array [5] ser� do 0 ao 4
� melhor usar um array, do que criar diversas vari�veis de mesmo tipo

se vc tentar imprimir um array com um �ndice inexistente, vc receber� um valor 'LIXO', q seri� o valor da pr�xima posi��o da mem�ria, q ele acha, e �bvio que n � valor valido para o programa
*/
