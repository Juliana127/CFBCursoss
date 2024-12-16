#include <iostream>
#include <string>

using namespace std;

int main() {

	string txt("CFB Cursos - Curso de C++");

	//cout << txt << endl;

	/***************************************************************/

	//cout << txt.size() << endl << txt.length() << endl; //tamanho

	/***************************************************************/

	//cout << txt.max_size() << endl; //tamanho maximo da string

	/***************************************************************/

	//txt.resize(10);

	//cout << txt.size() << endl; //você pode alterar o tamanho da string
	//cout << txt << endl; //mas é isso que acontece

    /***************************************************************/

    cout << txt.capacity() << endl; //tamanho alocado para a string, e se mudar o 'resize' o capacity mudara também, desde que seja um valor maior, já q ele mostrara sempre o maior valor alocado

	return 0;
}
