#include <iostream>

using namespace std;

void somar(float *variavel, float valor);

int main() {

	float num = 0;

	somar(&num, 15); //só funcionará caso coloque o & aqui

	cout << num << endl;

	return 0;
}

void somar(float *variavel, float valor) {
    *variavel += valor; //quando fizer essa operação, ira para o endereço da memória que foi chamada
}

/*
como já sabemos, tentar chamar uma variável local de uma função em outra não funciona, n dará erro mas também não vai fazer oq vc deseja, ou seja, ponteiro é essencial
*/
