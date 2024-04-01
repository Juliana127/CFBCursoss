#include <iostream>

using namespace std;

int main() {

	int n1, n2, nota;
	string res;

	cout << "Digite a primeira nota: "; //qualquer valor para soma
	cin >> n1;

	cout << "Digite a segunda nota: ";
	cin >> n2;

	nota = n1 + n2; //soma dos resultados

	// >=60 aprovado - true
	// <60 reprovado - false

	(nota >= 60) ? res = "Aprovado" : res = "Reprovado"; //faz o teste lógico com as notas

	cout << "\nSituacao do aluno: " << res << endl; //puxa o resultado do teste lógico e imprime na tela

	return 0;
}

/*

O operador ternário é um 'if' simplificado, e mais rápido, então se for fazer um teste que não seja mt trabalhoso pro computador, pode usar ele ao invez do if.

Como ele é montado:

(expressão) ? valor1 : valor2

explicando:
(expressão) - teste lógico
? - se / if
valor1 - caso seja verdadeiro sairá a primeira opção
: - caso contrario / else
valor2 - caso seja falso sairá a segunda opção

*/
