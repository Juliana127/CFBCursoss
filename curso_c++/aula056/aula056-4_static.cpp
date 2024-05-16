#include <iostream>

using namespace std;

void somador() {
    static auto i{0}; //se n colocar o static, saíra apenas 1,1,1,1, quantas vezes for chamado a função, com static cada chamada realmente aumenta um, ou seja, 1, 2, 3, 4, 5, etc.
    i++;
    cout << i << endl;
}

int main() {

	somador();
	somador();
	somador();
	somador();
	somador();
	somador();
	somador();
	somador();
	somador();
	somador();

	return 0;
}

/*
o 'static' armazena a variável em uma posição da memória, e tds as vezes q ele for usar essa variável, ele usa o mesmo endereço de memória, então sempre q ele voltar a ver esse endereço ele ve q já tem um numero, então ele percebe q tem q aumentar um número, ou seja, ele viu q ta 0, ele aumenta fica 1, viu 1 aumenta fica 2, e etc, sempre na mesma posição da memória.
*/
