#include <iostream>

using namespace std;

int main() {

	int n = 0;

	while(n += 2 < 20) { //faz o infinito desta forma, ou da lá de baixo
        cout << "Infinito - " << n << endl;
        //n++;
	}

	return 0;
}

/*
Tbm funciona se descomentar o incremento e deixar apenas um número dentro do parenteses:
    while(1) {
        n++
    }

Mas se o número for zero, da 'false' e ele nem executa o programa, se for 1 pra cima da 'true' então ta de boa
*/
