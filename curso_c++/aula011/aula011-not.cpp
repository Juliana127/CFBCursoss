#include <iostream>

using namespace std;

int main() {

	int num;

	cout << "Digite um valor [0/1]: ";
	cin >> num;

	if(!num) {
        cout << "\nVou ao clube\n"; //num n�o � falso(1)
	} else {
        cout << "\nVou ao cinema\n"; //num � falso(0)
	}

	return 0;
}

/*
Aqui se l�: se(if) num(valor da vari�vel) N�O for verdadeiro, cai no else
este � usado com o tipo bool, j� que fica como verdadeiro ou falso, (0 e 1), mas neste caso fica como n�mero mesmo(int)
*/
