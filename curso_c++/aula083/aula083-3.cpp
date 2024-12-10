#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char txt[]="CFB Cursos - Curso de C++ - www.youtube.com/cfbcursos";
	char chave[]="yt+w";
	int i;

	i = strcspn(txt, chave); //pesquisa qualquer e quantos caracteres quiser colocar, sempre procura o primeiro

	cout << "Pos: " << i << " - " << txt[i] <<  endl;

	return 0;
}
