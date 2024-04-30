#include <iostream>
#include "Aviao.h" //incluindo o arquivo construtor

using namespace std;

int main() {

    Aviao *av1 = new Aviao(1); //desse jeito, para informar o tipo do aviao q quero logo aqui, diferente da aula passada q tinha q chamar em outra linha
    Aviao *av2 = new Aviao(2);

    Aviao *av3 = new Aviao(3);

    av1->imprimir();
    av2->imprimir();
    av3->imprimir();

	return 0;
}
