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
Lembre-se que: se no enum, voc� der o valor para o primeiro parametro(ex.: fuzil), e n�o der para os seguintes, ent�o, como � sequencial, o segundo parametro ser� um n�mero a mais que o anterior (ou seja, revolver seria 101, rifle 102, etc)
*/
