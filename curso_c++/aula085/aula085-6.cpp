#include <iostream>
#include <string>

using namespace std;

int main() {

    string txt("CFB Cursos - Curso de C++");
    string txt2 = "JavaScript";

	txt.replace(22,4,txt2); //apartir da posição 22, quero substituir os 4 caracteres (c + + \0 = 4), por tal outra string

	cout << txt << endl;

	return 0;
}
