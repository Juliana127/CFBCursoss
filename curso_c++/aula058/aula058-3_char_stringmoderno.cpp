#include <iostream>

using namespace std;

int main() {

	const char* n{"Juliana"}; //forma moderna de fazer uma string, foi oq o prof disse

	//for(auto i : n) { cout << i << endl; } //não funciona pois não é uma coleção, não tem implementado os métodos 'begin' e 'end'

	for(int i=0; i <= 8; i++) {
        cout << n[i];
	}

	return 0;
}

/*
e pq do ponteiro no char(char*)? pois isso "define" q o char é uma string, se tirar fica como tentativa de converção, e ou vc coloca o '*' ou vc usa '[]' tipo:

const char* n;

const char n[];

se da primeira forma é melhor do que se preocupar com tamanho do array ou tals
*/
