#include <iostream>
#include <cstring> //string.h (� para manipula��o de strings, n�o defini��es da classe string)

using namespace std;

int main() {

	char txt1[50]="Curso de Programacao";
	char txt2[50]="";

	//1� de onde vai, e 2� de onde vem
	//strcpy(txt2, txt1);

	//txt2=txt1; //n�o funciona, pois � char, apenas funcionaria com string, int, mas char n�o

    //strncpy(txt2,txt1,4); //voc� pode controlar quantos caracteres apareceram, nesse caso, do texto aparecera apenas 4 letras

    //memcpy - faz a c�pia do bloco de mem�ria
    memcpy(txt2,txt1,sizeof(txt1)+1); //o +1 � para o caracter terminador(\n)

	cout << txt2 << endl;

	return 0;
}
