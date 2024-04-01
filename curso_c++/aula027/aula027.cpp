#include <iostream>

using namespace std;

int main() {

//valor inicial: 0  ,   1     ,  2   ,   3
	enum armas{fuzil, revolver, rifle, escopeta}; //tudo dentro das {chaves} s�o os valores da variavel 'armas'

	//int  num      -       seria tipo isso, se n�o fosse usando o enum
	armas armaSelecionada; //aqui cria a vari�vel

	//se for dado: 'fuzil' imprime 0, se for 'revolver' imprime 1, e assim por diante
	armaSelecionada=escopeta; //aqui da o valor para a vari�vel (passa um que estiver no enum, e ser� imprimido sua posi��o)

	cout << armaSelecionada;

	return 0;
}

/*
Enum(Enumeradores) - s�o tipos de dados que representam um conjunto de constantes nomeadas

(o prof deu um ex. de: num jogo vc qr armazenar a quantidade de muni��o de um jogador com uma certa arma, vc cria um 'enum armas' dai vc coloca o tipo de arma(revolver, fuzil, etc) e cada uma das armas ser� associado a um valor inteiro(no caso seria assciado a um tanto de balas para cada arma))

o enum � um tipo (assim como string, int, char, etc) mas no fundo ele � um inteiro, mesmo que vc possa colocar string ou outros tipos nele o enum representa o tipo inteiro
*/
