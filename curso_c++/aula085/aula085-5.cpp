#include <iostream>
#include <string>

using namespace std;

int main() {

    string txt("CFB Cursos");

    txt.append("Curso de C++");

	txt.insert(10, " - "); //"na posi��o 10, coloque um tra�o"

	//txt.erase(11,7); //"apartir de tal posi��o(1� parametro) quero que tantos elementos sejam removidos(2� parametro)"


	cout << txt << endl;

	return 0;
}
