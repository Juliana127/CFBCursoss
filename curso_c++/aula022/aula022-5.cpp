#include <iostream>

using namespace std;

void comVetor(string automoveis[4]);

int main() {

	string transporte[4]={"Carro","Moto","Barco","Aviao"};

	comVetor(transporte);

	return 0;
}

void comVetor(string automoveis[4]) {
    for(int i = 0; i < 4; i++) {
        cout << automoveis[i] << " - teste" << endl;
    }
}

/*
n�o sei explicar, mas o 'teste' tira qualquer uma das minhas duvidas atuais, s� sei que h� uma troca mas a fun��o 'comVetor' esta fazendo tudo funcionar como deveria
*/
