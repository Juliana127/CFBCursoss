#include <iostream>

using namespace std;

int main() {

	const char* n{"Juliana"}; //forma moderna de fazer uma string, foi oq o prof disse

	//for(auto i : n) { cout << i << endl; } //n�o funciona pois n�o � uma cole��o, n�o tem implementado os m�todos 'begin' e 'end'

	for(int i=0; i <= 8; i++) {
        cout << n[i];
	}

	return 0;
}

/*
e pq do ponteiro no char(char*)? pois isso "define" q o char � uma string, se tirar fica como tentativa de conver��o, e ou vc coloca o '*' ou vc usa '[]' tipo:

const char* n;

const char n[];

se da primeira forma � melhor do que se preocupar com tamanho do array ou tals
*/
