#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int res;

	char txt1[30]="Curso de Programacao";
	char txt2[30]="CFB Cursos";
	//char txt2[30]="Curso de Programacao";

	//res = strcmp(txt1,txt2);
	res = strncmp(txt1,txt2,sizeof(txt1));

	if(res==0) {
        cout << "Iguais" << endl;
	} else {
        cout << "Diferentes" << endl;
	}

	return 0;
}

/*
0 = iguais
>0 = 1 maior que 2
<0 = 2 maior que 1
*/
