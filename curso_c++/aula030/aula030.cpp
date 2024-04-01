#include <iostream>
#include <queue> //biblioteca para mexer com fila

using namespace std;

int main() {

	queue <string> cartas;

	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");

	cout << "Tamanho da fila: " << cartas.size() << endl;
	cout << "Primeira carta: " << cartas.front() << endl; //mostra por ordem qm esta na frente (Rei de Copas)
	cout << "Ultima carta: " << cartas.back() << "\n\n"; //mostra por ordem qm esta no final (Rei de Paus)

	cout << "------------------------------------------------------------(separacao)\n\n";

	while(!cartas.empty()) { //enquanto cartas nao estiver vazia ele executa, quando estiver ele para de executar
        cout << "Primeira carta atual: \"" << cartas.front() << "\"\n\n";
        cartas.pop();
	}


	return 0;
}

/*
comando iguais a pilha/stack necessarios em fila/queue:
empty
size
push
pop

comando diferentes da pilha/stack necessarios em fila/queue:
front
back

*/
