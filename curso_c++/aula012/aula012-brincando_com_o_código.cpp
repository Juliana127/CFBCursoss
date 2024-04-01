#include <iostream>

using namespace std;

int main() {

	int n1, n2, nota;
	string res; //o retorno deve ser string (palavras)

	cout << "Digite a primeira nota: ";
	cin >> n1;

	cout << "Digite a segunda nota: ";
	cin >> n2;

	nota = n1+n2;

	res = (nota >= 60) ? "aprovado" : "Reprovado"; //não é mais simplesmente imprimir, é retornar o valor pra variável res

	cout << "\nSituacao do aluno: " << res << endl;

	return 0;
}
