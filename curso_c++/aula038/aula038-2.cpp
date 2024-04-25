#include <iostream>

using namespace std;

void somar(float *var, float valor);
void ponteiroArray(float *vetPont);

int main() {

	float num = 0, vetor[5];

	somar(&num, 15);
	ponteiroArray(vetor); //sem endere�o


	cout << num << "\n\n";

	for(int i=0; i<5; i++) {
        cout << vetor[i] << endl;
	}

	return 0;
}

void somar(float *var, float valor) {
    *var += valor;
}

void ponteiroArray(float *vetPont) {
    vetPont[0] = 0;
    vetPont[1] = 1;
    vetPont[2] = 2;
    vetPont[3] = 3;
    vetPont[4] = 4;
    //os valores colocados nesse corpo, s�o realmente valores do vetor no corpo do main
}

/*
quando � vetor n�o precisa especificar o endere�o
*/
