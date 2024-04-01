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
não sei explicar, mas o 'teste' tira qualquer uma das minhas duvidas atuais, só sei que há uma troca mas a função 'comVetor' esta fazendo tudo funcionar como deveria
*/
