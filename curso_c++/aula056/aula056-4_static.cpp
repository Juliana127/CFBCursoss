#include <iostream>

using namespace std;

void somador() {
    static auto i{0}; //se n colocar o static, sa�ra apenas 1,1,1,1, quantas vezes for chamado a fun��o, com static cada chamada realmente aumenta um, ou seja, 1, 2, 3, 4, 5, etc.
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
o 'static' armazena a vari�vel em uma posi��o da mem�ria, e tds as vezes q ele for usar essa vari�vel, ele usa o mesmo endere�o de mem�ria, ent�o sempre q ele voltar a ver esse endere�o ele ve q j� tem um numero, ent�o ele percebe q tem q aumentar um n�mero, ou seja, ele viu q ta 0, ele aumenta fica 1, viu 1 aumenta fica 2, e etc, sempre na mesma posi��o da mem�ria.
*/
