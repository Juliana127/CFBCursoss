#include <iostream>

using namespace std;

int main() {

	string veiculo = "Carro";
	string *ponteiroVeiculo;

	ponteiroVeiculo = &veiculo; //ponteiroVeiculo recebe endereço de veiculo

	cout << ponteiroVeiculo << endl << &veiculo << endl;
	cout << veiculo << endl; //sai o valor da variável

	//manipulando o valor da variável atravez do ponteiro:
	*ponteiroVeiculo = "Moto"; //muda o valor que esta no endereço, tanto da variável quanto pro ponteiro

	cout << *ponteiroVeiculo << endl << veiculo << endl;

	return 0;
}

/*
Antes de mais nada, o que é um PONTREIRO? o ponteiro armazena o endereço de outra variável, uma variável que ele esta apontando, não o seu próprio endereço, então consigo relacionar variáveis(uma variável com um ponteiro) atravez do endereço, e com o endereço de uma variável consigo manipular o seu conteudo sem problema, independente do escopo q eu estiver dentro do programa

o ponteiro deve ser do mesmo tipo que a variável q ele aponta

* - com isso significa que é um ponteiro, colocado antes do nome do ponteiro

e para dizer que tal ponteiro recebe tal endereço de tal variável se usa - & antes do nome da variável
(EX:
 int num = 4; //variável
 int *pn; //ponteiro
 pn = &num; //ponteiro recebe variável
 )
 e se chamar o 'cout' pro ponteiro que recebeu o endereço da variável, mesmo que ela tenha um valor (nesse caso é 4), vai sair o endereço da variável e n seu valor (vamos supor que a variável esteja na posição 1000 da memória)
 (EX:
  cout << pn; //sai o endereço
  cout << *pn; //sai o valor da variável
  )

----------------------------------------------------------------------------------------------------

int num = 4;
	int *pn;
	pn = &num;

	cout << pn << endl;
	cout << *pn;

----------------------------------------------------------------------------------------------------

o endereço das variáveis fica guardado na memória RAM
*/
