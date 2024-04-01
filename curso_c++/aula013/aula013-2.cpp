#include <iostream>

using namespace std;

int main() {

	int valor;

	cout << "[1,2,3]= Mensagem 1 | [4,5,6]=Mensagem 2" << endl;
	cout << "Digite um numero: ";
	cin >> valor;


	switch(valor) {
        case 1:
        case 2:
        case 3:
            cout << "Voce esta procurando o que?" << endl;
            break;
        case 4:
        case 5:
        case 6:
            cout << "Voce nao encontra nada aqui" << endl;
            break;

        default:
            cout << "Voce escolheu um numero fora do normal!" << endl;

	}

	return 0;
}
