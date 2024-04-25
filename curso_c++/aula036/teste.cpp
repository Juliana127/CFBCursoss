#include <iostream>

using namespace std;

int main() {

	int num = 0;
	int *test;
	test = &num;

	cout << "Valor inicial de num: " << num << endl;
	cout << "De um valor novo para num: ";
	cin >> *test;

	cout << "Novo valor: " << *test << endl;

	cout << "De mais um valor novo para num: ";
	cin >> *test;

	cout << "Novo valor: " << *test;

	return 0;
}
