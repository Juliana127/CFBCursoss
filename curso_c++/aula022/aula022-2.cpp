#include <iostream>

using namespace std;

void texto();

int main() {

	for(int i = 0; i < 10; i++) {
        texto(); //isso chamará a função 10 vezes, ou mais, basta mudar a quantidade de vezes que vc qr chamar a função
	}

	return 0;
}

void texto() {
    cout << "Canal Fessor Bruno.\n\n";
}

/*
isso é reutilização de código
*/
