#include <iostream>
#include <stack>

using namespace std;

int main() {

	stack <string> cartas;

	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");

	cout << "Tamanho da pilha: " << cartas.size()<< endl;

	cout << "Carta do topo \"" << cartas.top() << "\"" << endl;

	cartas.pop();
	//cartas.pop(); //se colocar 2 pop, diminui dois valores de stack, ou seja, sairá "Rei de Espadas"

	cout << "Nova carta do topo: \"" << cartas.top() << "\"" << endl;


	return 0;
}
