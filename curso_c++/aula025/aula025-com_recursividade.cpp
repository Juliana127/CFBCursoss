#include <iostream>

using namespace std;

void contador(int num, int cont = 0); //para n ter que falar que o valor de cont � 0 sempre, j� inicia ele como 0 como padr�o e resolve um preblema

int main() {
    //       num
	contador(20); //COM RECURSIVIDADE

	return 0;
}

void contador(int num, int cont) {
    cout << cont << endl; //n�o precisa de for quando for recursiva
    if(num > cont) {
        contador(num, ++cont); //a fun��o esta se chamando, isso � a recursividade
        //se colocar o p�s incremento dar� um infinito de 0s, ent�o se faz a pr� incrementa��o que faz funcionar certo
    }
}

/*
no minuto: 10:45 o prof explica como funciona a recursividade, que cada rea��o do programa tem o seu pr�prio registro  de ativa��o (ou seja, o valor de num = 20, ent�o ter� 20 rea��es por parte do cont, tecnicamente cada uma diferente da outra, tanto com o que � imprimido, quanto com seu local na mem�ria)
*/
