#include <iostream>

using namespace std;

int soma(int n1, int n2) {
    return n1+n2;
}

string canal() {
    return "CFB Cursos";
}

int main() {

	auto num{10}; //int
	auto nome{"Juliana"}; //char ou string
	auto flutuante{10.4}; //double ou float

	//auto res = soma(10,5);
	auto res = canal();

	cout << res << endl;

	return 0;
}

/*
auto = qualquer tipo de vari�vel (int, string, etc). MAS deve ser inicializado na cria��o da vari�vel, para caso tente mudar o tipo dessa vari�vel, n�o de,ex:

auto num = 10;
num = "Volcao"

isso n�o vai dar certo, retorna erro, e n pd deixar para inicializar depois.
*/
