#include <iostream>
#include <string>

using namespace std;

int main() {

	string txt("CFB Cursos");

	//txt+= " - Curso de C++";
	txt.append(" - Curso de C++"); //mesma coisa, esta sendo feita a concatenação

	//txt.push_back('X'); //add caracter no final da string
	txt.pop_back(); //remove o ultimo caracter da string

	cout << txt << endl;

	return 0;
}
