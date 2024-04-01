#include <iostream>

using namespace std;

int main() {

	int num;

	cout << "Digite um valor [0/1]: ";
	cin >> num;

	if(!num) {
        cout << "\nVou ao clube\n"; //num não é falso(1)
	} else {
        cout << "\nVou ao cinema\n"; //num é falso(0)
	}

	return 0;
}

/*
Aqui se lê: se(if) num(valor da variável) NÃO for verdadeiro, cai no else
este é usado com o tipo bool, já que fica como verdadeiro ou falso, (0 e 1), mas neste caso fica como número mesmo(int)
*/
