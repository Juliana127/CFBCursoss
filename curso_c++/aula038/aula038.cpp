#include <iostream>

using namespace std;

void somar(float *variavel, float valor);

int main() {

	float num = 0;

	somar(&num, 15); //s� funcionar� caso coloque o & aqui

	cout << num << endl;

	return 0;
}

void somar(float *variavel, float valor) {
    *variavel += valor; //quando fizer essa opera��o, ira para o endere�o da mem�ria que foi chamada
}

/*
como j� sabemos, tentar chamar uma vari�vel local de uma fun��o em outra n�o funciona, n dar� erro mas tamb�m n�o vai fazer oq vc deseja, ou seja, ponteiro � essencial
*/
