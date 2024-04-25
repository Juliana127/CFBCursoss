#include <iostream>

using namespace std;

int main() {

	string veiculo = "Carro";
	string *ponteiroVeiculo;

	ponteiroVeiculo = &veiculo; //ponteiroVeiculo recebe endere�o de veiculo

	cout << ponteiroVeiculo << endl << &veiculo << endl;
	cout << veiculo << endl; //sai o valor da vari�vel

	//manipulando o valor da vari�vel atravez do ponteiro:
	*ponteiroVeiculo = "Moto"; //muda o valor que esta no endere�o, tanto da vari�vel quanto pro ponteiro

	cout << *ponteiroVeiculo << endl << veiculo << endl;

	return 0;
}

/*
Antes de mais nada, o que � um PONTREIRO? o ponteiro armazena o endere�o de outra vari�vel, uma vari�vel que ele esta apontando, n�o o seu pr�prio endere�o, ent�o consigo relacionar vari�veis(uma vari�vel com um ponteiro) atravez do endere�o, e com o endere�o de uma vari�vel consigo manipular o seu conteudo sem problema, independente do escopo q eu estiver dentro do programa

o ponteiro deve ser do mesmo tipo que a vari�vel q ele aponta

* - com isso significa que � um ponteiro, colocado antes do nome do ponteiro

e para dizer que tal ponteiro recebe tal endere�o de tal vari�vel se usa - & antes do nome da vari�vel
(EX:
 int num = 4; //vari�vel
 int *pn; //ponteiro
 pn = &num; //ponteiro recebe vari�vel
 )
 e se chamar o 'cout' pro ponteiro que recebeu o endere�o da vari�vel, mesmo que ela tenha um valor (nesse caso � 4), vai sair o endere�o da vari�vel e n seu valor (vamos supor que a vari�vel esteja na posi��o 1000 da mem�ria)
 (EX:
  cout << pn; //sai o endere�o
  cout << *pn; //sai o valor da vari�vel
  )

----------------------------------------------------------------------------------------------------

int num = 4;
	int *pn;
	pn = &num;

	cout << pn << endl;
	cout << *pn;

----------------------------------------------------------------------------------------------------

o endere�o das vari�veis fica guardado na mem�ria RAM
*/
