#include <iostream>
#include <stack>

using namespace std;

int main() {

	stack <string> cartas;

	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");

	if(cartas.size() == 0) {
        cout << "Pilha vazia" << endl;
	}else{
        cout << "Pilha com cartas" << endl;
	}

	while(!cartas.empty()) { //enquanto(cartas NÂO é vazio:)
        cartas.pop();
	}

	cout << "Tamanho da pilha: " << cartas.size()<< endl;

	/*cout << "Carta do topo \"" << cartas.top() << "\"" << endl;

	cartas.pop();

	cout << "Nova carta do topo: \"" << cartas.top() << "\"" << endl;*/

	return 0;
}
