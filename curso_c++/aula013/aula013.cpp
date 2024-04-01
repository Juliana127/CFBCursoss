#include <iostream>

using namespace std;

int main() {

	int valor;

	cout << "[1]=verde, [2]=azul, [3]=vermelho" << endl;
	cout << "Digite uma cor: ";
	cin >> valor;

	switch(valor) {
        case 1:
            cout << "Cor selecionada: Verde" << endl;
            break;
        case 2:
            cout << "Cor selecionada: Azul" << endl;
            break;
        case 3:
            cout << "Cor selecionada: Vermelho" << endl;
            break;
        default: //caso o valor digitado seja qualquer outro n�mero que n�o � 1, 2 ou 3 (ou quantos cases tiver)
            cout << "Cor invalida!" << endl;
	}

    cout << "\n---------------Programa Finalizado---------------\n";

	return 0;
}

/*
no Switch voc� s� faz testes de igualdade
e o case � uma constante que ser� comparada com a express�o


switch(express�o) {
    case const1:
        comandos;
        break;
    case const2:
        comandos;
        break;
    ...
    default:
        comandos;
}

se nenhum case tiver o valor procurado, ent�o, caso tenha um default, pulara para ele, e s� ser� feito testes caso o case tenha o valor, se n�o, s� ser� ignorado

*/
