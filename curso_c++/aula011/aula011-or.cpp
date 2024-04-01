#include <iostream>

using namespace std;

int main() {

	int num;

	cout << "Digite um valor; ";
	cin >> num;

	if( (num > 3 && num < 7) || (num > 9 && num < 15) || (num > 15 && num < 20)  ) {
        cout << "\nValor aceito\n";
	} else {
        cout << "\nValor nao aceito\n";
	}

	return 0;
}

/*
Aqui, as faixas de valores são de 1 a 20, sendo separados entre:
2 a 6
10 a 14
16 a 19

ou seja, se um destes testes forem verdadeiro dara VALOR ACEITO
*/
