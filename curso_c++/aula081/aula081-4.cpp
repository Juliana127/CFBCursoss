#include <iostream>
#include <cctype>

using namespace std;

int main() {

	char str[]="cfb-cursos";
	int i=0;
	char c;

	while(str[i]){
        c = str[i];
        putchar(toupper(c)); //o contrario é: tolower para minusculo
        i++;
	}

	return 0;
}
