#include <iostream>

using namespace std;

int global1, global2; //podem ser usadas em qualquer fun��o que forem chamadas

int main() {

    int local1, local2; //s� pd usar dentro da fun��o main, � podem ser chamadas por outras fun��es
    int res;

    global1 = 6; //pode receber valor dentro da fun��o
    global2 = 4; //mesmo dsendo global
    local1 = 9;
    local2 = 10;

    res = global1 + global2 + local1 + local2;

    cout << "Soma de todas as variaveis: " << res << endl;

    return 0;
}

/*
Vari�veis Globais - S�o criadas fora de qualquer fun��o, e podem ser usadas em todas as fun��es que for chamada
Vari�veis Locais - S� podem ser usadas dentro daquela fun��o da qual foi criada dentro.

Operadores Matem�ticos: + - / * % ()

Para operadores:
+ soma
- subtra��o
/ dividir
* vezes
% mod / resto da divis�o
() assim como na matem�tica normal, tudo que estiver dentro do parenteses ser� executado antes das outas contas
*/
