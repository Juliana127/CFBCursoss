#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char txt[]="CFB Cursos - Curso de C++ - www.youtube.com/cfbcursos";
	char * c;
	char pesquisa='o';

	c = strrchr(txt,pesquisa); //pesquisa sempre o ultimo caracter

	cout << "Pos: " << c-txt << endl;

	return 0;
}
