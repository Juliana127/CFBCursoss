#include <iostream>

using namespace std;

void contador(int num);

int main() {

    //SEM RECURSIVIDADE:
	contador(10); //faz a conta de 0 a 10 como pedido na fun��o

	return 0;
}

void contador(int num) {
    for(int i=0;i<=num;i++) {
        cout << i << endl;
    }
}

/*
Recursividade (fun��o que se chama N vezes)
*/
