#include <iostream>
#include <cctype> //evolu��o da ctype.h

using namespace std;

int main() {

	char str[]="CFB Cursos";
	int i=0;

	//isalnum = is - �, al - alfa, num - numerico
	//isalpha - tamb�m n�o faz a diferen�a, assim como isalnum
	while(isalnum (str[i])){
        i++;
	}

	cout << "Os "<< i << " primeiros caracteres sao alfanumericos." << endl;

	return 0;
}

/*
letras s�o alfa numericas, espa�o n�o �, ent�o ser� lido apenas 3 letras (nesse caso) para dar 'false', at� l�, dar� 'true', caso n�o fa�a nada para mudar o que � alfanumerico ou n�o
*/
