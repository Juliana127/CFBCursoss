#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char txt[80]="Curso de Programacao";

	strcat(txt," - CFB Crusos"); //concatena a string com um texto adicional

	cout << txt << endl;

	return 0;
}

 /*
 tamb�m tem o 'strncat' do qual voc� pode especificar quantos caracteres voc� quer fazer a concatena��o
 */
