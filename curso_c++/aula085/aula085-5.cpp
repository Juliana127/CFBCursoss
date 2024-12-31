#include <iostream>
#include <string>

using namespace std;

int main() {

    string txt("CFB Cursos");

    txt.append("Curso de C++");

	txt.insert(10, " - "); //"na posição 10, coloque um traço"

	//txt.erase(11,7); //"apartir de tal posição(1° parametro) quero que tantos elementos sejam removidos(2° parametro)"


	cout << txt << endl;

	return 0;
}
