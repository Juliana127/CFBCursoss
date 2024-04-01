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

	(nota >= 60) ? res = "Aprovado" : res = "Reprovado"; //faz o teste l�gico com as notas

	cout << "\nSituacao do aluno: " << res << endl; //puxa o resultado do teste l�gico e imprime na tela

	return 0;
}

/*

O operador tern�rio � um 'if' simplificado, e mais r�pido, ent�o se for fazer um teste que n�o seja mt trabalhoso pro computador, pode usar ele ao invez do if.

Como ele � montado:

(express�o) ? valor1 : valor2

explicando:
(express�o) - teste l�gico
? - se / if
valor1 - caso seja verdadeiro sair� a primeira op��o
: - caso contrario / else
valor2 - caso seja falso sair� a segunda op��o

*/
