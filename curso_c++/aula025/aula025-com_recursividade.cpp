#include <iostream>

using namespace std;

void contador(int num, int cont = 0); //para n ter que falar que o valor de cont é 0 sempre, já inicia ele como 0 como padrão e resolve um preblema

int main() {
    //       num
	contador(20); //COM RECURSIVIDADE

	return 0;
}

void contador(int num, int cont) {
    cout << cont << endl; //não precisa de for quando for recursiva
    if(num > cont) {
        contador(num, ++cont); //a função esta se chamando, isso é a recursividade
        //se colocar o pós incremento dará um infinito de 0s, então se faz a pré incrementação que faz funcionar certo
    }
}

/*
no minuto: 10:45 o prof explica como funciona a recursividade, que cada reação do programa tem o seu próprio registro  de ativação (ou seja, o valor de num = 20, então terá 20 reações por parte do cont, tecnicamente cada uma diferente da outra, tanto com o que é imprimido, quanto com seu local na memória)
*/
