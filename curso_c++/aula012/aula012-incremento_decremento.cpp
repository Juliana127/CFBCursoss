#include <iostream>

using namespace std;

int main() {

	int valor, x=5;

	cout << "Digite um valor: ";
	cin >> valor;

	(valor >=10) ? x++ : x--;

	cout << "Novo valor do X: " << x << endl;

	return 0;
}

/*
se fosse em if:

if(valor >= 10) {
    x++;
} else {
    x--;
}
*/
