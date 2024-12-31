#include <iostream>
#include <string>

using namespace std;

int main() {

	string txt("CFB Cursos - Curso de C++ - Serie sobre bibliotecas - www.youtube.com/cfbcursos");
	int tam = txt.size();

	txt.back()='z'; //fazendo substituição
	cout << txt << endl; //leva para o ultimo elemento da string

	txt.front()='x';
	cout << txt << endl;

	return 0;
}
