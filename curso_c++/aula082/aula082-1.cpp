#include <iostream>
#include <cstring> //string.h (é para manipulação de strings, não definições da classe string)

using namespace std;

int main() {

	char txt1[50]="Curso de Programacao";
	char txt2[50]="";

	//1° de onde vai, e 2° de onde vem
	//strcpy(txt2, txt1);

	//txt2=txt1; //não funciona, pois é char, apenas funcionaria com string, int, mas char não

    //strncpy(txt2,txt1,4); //você pode controlar quantos caracteres apareceram, nesse caso, do texto aparecera apenas 4 letras

    //memcpy - faz a cópia do bloco de memória
    memcpy(txt2,txt1,sizeof(txt1)+1); //o +1 é para o caracter terminador(\n)

	cout << txt2 << endl;

	return 0;
}
