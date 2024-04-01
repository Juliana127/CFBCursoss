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
        default: //caso o valor digitado seja qualquer outro número que não é 1, 2 ou 3 (ou quantos cases tiver)
            cout << "Cor invalida!" << endl;
	}

    cout << "\n---------------Programa Finalizado---------------\n";

	return 0;
}

/*
no Switch você só faz testes de igualdade
e o case é uma constante que será comparada com a expressão


switch(expressão) {
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

se nenhum case tiver o valor procurado, então, caso tenha um default, pulara para ele, e só será feito testes caso o case tenha o valor, se não, só será ignorado

*/
