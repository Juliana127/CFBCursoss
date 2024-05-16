#include <iostream>

using namespace std;

int main() {

    register int cont;

    for(cont = 0; cont <= 10; cont++) {
        cout << cont << endl;
    }

	return 0;
}

/*
pelo q o prof falou o register é +- assim: vc pede encarecidamente para q essa variável seja guardada em outro lugar q não seja a memória RAM, mas nem sempre ele te ouve e então n faz isso e te ignora, mas esse pedido é feito pois quero acesso rápido aquela variável, e já q o registrador esta no processador e processador = rápido então c já entendeu.
*/
