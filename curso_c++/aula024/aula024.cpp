#include <iostream>

using namespace std;

void impressao(string txt = "Prof Bruno"); //se colocar aqui, n�o h� necessidade de colocar o valor ao chamar dentro de main
//void impressao(string txt = ""); //se fizer isso, o programa roda sem erros, mas claro que n�o imprime nada

int main() {

	impressao(); //se n�o colocar pelo menos na prototipagem /\ ent�o deve colocar o valor aqui
    //impressao("Youtube"); //se fizer isso, mesmo que na prototipagem tenha um valor, o valor dado dentro de main ser� imprimido, s� se for como o modo de cima que ai sim o prototipo tem o 'poder'

	return 0;
}

void impressao(string txt) {
    cout << txt << endl;
}

/*
Omiss�o de argumentos e argumentos pad�o:
omiss�o � vc colocar o valor padr�o na prototipagem (quando chama o nome da fun��o antes do main)
argumentos padr�o � esse valor que voc� da na prototipagem e mesmo chamando a fun��o sem nada nos () ainda assim � feito o que se pede (impresss�o)

*/
