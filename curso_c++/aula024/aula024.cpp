#include <iostream>

using namespace std;

void impressao(string txt = "Prof Bruno"); //se colocar aqui, não há necessidade de colocar o valor ao chamar dentro de main
//void impressao(string txt = ""); //se fizer isso, o programa roda sem erros, mas claro que não imprime nada

int main() {

	impressao(); //se não colocar pelo menos na prototipagem /\ então deve colocar o valor aqui
    //impressao("Youtube"); //se fizer isso, mesmo que na prototipagem tenha um valor, o valor dado dentro de main será imprimido, só se for como o modo de cima que ai sim o prototipo tem o 'poder'

	return 0;
}

void impressao(string txt) {
    cout << txt << endl;
}

/*
Omissão de argumentos e argumentos padão:
omissão é vc colocar o valor padrão na prototipagem (quando chama o nome da função antes do main)
argumentos padrão é esse valor que você da na prototipagem e mesmo chamando a função sem nada nos () ainda assim é feito o que se pede (impresssão)

*/
