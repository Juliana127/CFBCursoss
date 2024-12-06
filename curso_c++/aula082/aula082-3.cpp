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
 também tem o 'strncat' do qual você pode especificar quantos caracteres você quer fazer a concatenação
 */
