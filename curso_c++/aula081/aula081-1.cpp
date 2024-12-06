#include <iostream>
#include <cctype> //evolução da ctype.h

using namespace std;

int main() {

	char str[]="CFB Cursos";
	int i=0;

	//isalnum = is - é, al - alfa, num - numerico
	//isalpha - também não faz a diferença, assim como isalnum
	while(isalnum (str[i])){
        i++;
	}

	cout << "Os "<< i << " primeiros caracteres sao alfanumericos." << endl;

	return 0;
}

/*
letras são alfa numericas, espaço não é, então será lido apenas 3 letras (nesse caso) para dar 'false', até lá, dará 'true', caso não faça nada para mudar o que é alfanumerico ou não
*/
