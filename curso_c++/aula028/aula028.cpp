#include <iostream>
#include <stack> //para trabalhar com stack tem que importar a biblioteca stack

using namespace std;

int main() {
    //o tipo dessa pilha é 'string', e o nome é 'cartas'
	stack < string > cartas; //não precisa dar um tamanho especifico para a pilha, a medida que vai adicionando/removendo elementos o tamanho da pilha altera automaticamente, e da para ver com o parametro size()

	//e isso aqui é a 'lista':
	cartas.push("Rei de Copas"); //1° mas será o QUARTO/ULTIMO a ser trabalhado
	cartas.push("Rei de Espadas"); //2° mas será o TERCEIRO a ser trabalhado
	cartas.push("Rei de Ouros"); //3° mas será o SEGUNDO a ser trabalhado
	cartas.push("Rei de Paus"); //4° mas será o PRIMEIRO a ser trabalhado

	cout << "Carta do topo: \"" << cartas.top() << "\""<< endl;

	cout << "Tamanho da pilha: " << cartas.size(/*sairá 4*/) << ", com push" << endl;

	cartas.pop();

	cout << "Tamanho da pilha: " << cartas.size() << ", com pop"  << endl;

	return 0;
}

/*
stack = pilha

a pilha é como se fosse um vetor, só que com controles especificos
vamos dizer que você tem um copo, e 4 bolinhas, a primeira bolinha a ser colocada nesse copo sera a ultima a sair

o exemplo de 'cartas' é pq quando vc esta jogando, vamos dizer que uno, para comprar cartas vc deve pegar a ultima carta que esta em cima do monte de cartas certo, é tipo isso, e a carta que esta na mesa, de baixo de todas as outras, é a ultima a ser comprada.

o 'cartas.push' vem de programação orientada a objetos
e o 'push' é para adicionar elementos dentro de uma pilha, e o ("...") é para incluir um valor a 'cartas'

já o '.pop' ao contrario do push, serve para retirar os elementos da pilha, de um em um, retirando primeiro o que esta no topo (no caso, retirando o rei de paus)

já o '.top' serve para mostrar o valor da primeira carta a ser trabalhada (a ultima que foi colocada)
*/
