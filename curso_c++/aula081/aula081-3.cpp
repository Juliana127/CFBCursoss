#include <iostream>
#include <cctype>

using namespace std;

int main() {

	char str[]=">> CFB-Cursos <<";
	int i=0, cont=0;

	while(str[i]){
        if(isspace(str[i])){
            cont++;
        }
        i++;
	}
	cout << "Existem " << cont << " espacos." << endl;

	return 0;
}


/*
isalnum = alfanumerico
isalpha = alfanumerico
isspace = espa�o
iscntrl = \n (que mantem o controle, o '\n' mantem o controle de termino de uma string ou char ou coisa do tipo)
isdigit = digito numerico
islower = minusculo
isupper = maiusculo
isprint = se � imprimivel (ex: \n)
ispunct = pontua��o = , . ? ;
isxdigit = se � hexadecimal
toupper = faz ficar em maiusculo
tolower = faz ficar em minusculo
*/
