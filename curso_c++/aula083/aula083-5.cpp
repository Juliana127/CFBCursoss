#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char txt[]="CFB Cursos, Curso de C++ - www.youtube.com/cfbcursos";
	char * c;
	//char chave[]=",-./"

	c = strtok(txt, ",-./"); //divide a string de acordo com o que for pedido para dividir(pontos, determinadas letras, etc)

	while(c!=NULL) {
        cout << c << endl;
        c = strtok(NULL, ",-./"); //se não colocar NULL da loop infinito
	}

	return 0;
}
