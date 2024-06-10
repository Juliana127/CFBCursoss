#include <iostream> //sem ela, coisas como entrada e sa�da n�o  podem ser feitas, ou seja, 'cin' e 'cout' s�o inexistentes

using namespace std;

int main() {

	char n, s;

	n = cin.get();
	cin.ignore(30,' '); //maximo de caracteres que ser�o trabalhados no maximo, e o que deve ser ignorado (nesse caso os espa�os)

	s = cin.get();

	cout << n << " - " << s << endl; //s� vai aparecer a primeira letra do nome e sobrenome

	return 0;
}

/* Primeiro c�digo:

	char nome[50];

	cin.getline(nome,80);
	cout << nome << " - Tamanho: " << cin.gcount() << endl;

*/

/**
get - l� caracter por caracter (se for s� pra fazer leitura de tela use o get)
getline - mais eficiente com arquivos, l� a linha inteira (se for fazer leitura de arquivo use getline)

    cin.gcount():
get - s� conta quantos caracteres tem, ignorando o caracter terminador ("\0")
getline - v� a linha toda, at� o caracter terminador
**/
