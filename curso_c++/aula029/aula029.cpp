#include <iostream>
#include <stack>

using namespace std;

int main() {

	stack <string> cartas;

	if(cartas.empty()) {
        cout << "Pilha vazia" << endl;//se for verdadeiro que a pilha esta vazia, q como esta antes da lista então é verdadeiro
	}else{
        cout << "Pilha com cartas" << endl; //se for falso q a pilha esta vazia, no caso se o if fosse colocado de baixo da lista
	}

	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");

	cout << "Tamanho da pilha: " << cartas.size()<< endl;

	cout << "Carta do topo \"" << cartas.top() << "\"" << endl;

	cartas.pop();

	cout << "Nova carta do topo: \"" << cartas.top() << "\"" << endl;


	return 0;
}
