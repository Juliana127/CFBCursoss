#include <iostream>

using namespace std;

int main() {

	enum armas{fuzil=100, revolver=8, rifle=12, escopeta=1};
	armas armaSelecionada;

	armaSelecionada = revolver;

	cout << armaSelecionada;

	return 0;
}

/*
Lembre-se que: se no enum, você der o valor para o primeiro parametro(ex.: fuzil), e não der para os seguintes, então, como é sequencial, o segundo parametro será um número a mais que o anterior (ou seja, revolver seria 101, rifle 102, etc)
*/
