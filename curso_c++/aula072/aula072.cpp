#include <iostream> //sem ela, coisas como entrada e saída não  podem ser feitas, ou seja, 'cin' e 'cout' são inexistentes

using namespace std;

int main() {

	char n, s;

	n = cin.get();
	cin.ignore(30,' '); //maximo de caracteres que serão trabalhados no maximo, e o que deve ser ignorado (nesse caso os espaços)

	s = cin.get();

	cout << n << " - " << s << endl; //só vai aparecer a primeira letra do nome e sobrenome

	return 0;
}

/* Primeiro código:

	char nome[50];

	cin.getline(nome,80);
	cout << nome << " - Tamanho: " << cin.gcount() << endl;

*/

/**
get - lê caracter por caracter (se for só pra fazer leitura de tela use o get)
getline - mais eficiente com arquivos, lê a linha inteira (se for fazer leitura de arquivo use getline)

    cin.gcount():
get - só conta quantos caracteres tem, ignorando o caracter terminador ("\0")
getline - vê a linha toda, até o caracter terminador
**/
