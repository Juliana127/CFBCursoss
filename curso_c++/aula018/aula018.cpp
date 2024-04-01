#include <iostream>

using namespace std;

int main() {

	int vetor[5];
	//int vetor0, vetor1, vetor2, vetor3, vetor4;   seriá tipo isso
    int i;


	vetor[0] = 10;
	vetor[1] = 20;
	vetor[2] = 30;
	vetor[3] = 40;
	vetor[4] = 50;
	//vetor[5] = 60;    cuidado pq esse índice não existe no tamanho do vetor

	for(i=0; i < 5; i++) {
        cout << vetor[i] << endl; //vamos dizer q o i puxou os valores do array, e a cada interação ele puxa um valor até se satisfazer chegando a 5, desta forma sem precisar fazer um cout para cada vetor
	}

	return 0;
}

/*
Array = um determinado grupo de variáveis, de mesmo tipo e nome, com valores diferentes cada uma
as arrays de preferencia devem tem um número de quantidade declarado ( [5] ) para não dar problema com o programa (li que é mais seguro assim)
as arrays cmc pelo 0(zero), então se for um array [5] será do 0 ao 4
é melhor usar um array, do que criar diversas variáveis de mesmo tipo

se vc tentar imprimir um array com um índice inexistente, vc receberá um valor 'LIXO', q seriá o valor da próxima posição da memória, q ele acha, e óbvio que n é valor valido para o programa
*/
