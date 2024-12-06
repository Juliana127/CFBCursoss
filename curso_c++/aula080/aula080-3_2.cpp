#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char txt1[30]="Curso de Programacao";
	char txt2[30]=" - CFB Cursos";

	strcat(txt1, txt2);

	cout << txt1 << endl;

	return 0;
}

//tem o mesmo efeito que o jeito anterior
