#include <iostream>
#include <utility>

using namespace std;

int main() {

	int a{10}, b{5};

	swap(a,b); //é só falar quais variáveis quero trocar o valor e pronto

	cout << "Valor de a: " << a << endl << "Valor de b: " << b << endl;

	return 0;
}
