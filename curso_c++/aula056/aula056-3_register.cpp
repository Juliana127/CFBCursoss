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
pelo q o prof falou o register � +- assim: vc pede encarecidamente para q essa vari�vel seja guardada em outro lugar q n�o seja a mem�ria RAM, mas nem sempre ele te ouve e ent�o n faz isso e te ignora, mas esse pedido � feito pois quero acesso r�pido aquela vari�vel, e j� q o registrador esta no processador e processador = r�pido ent�o c j� entendeu.
*/
