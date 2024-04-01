#include <iostream>

using namespace std;

int global1, global2; //podem ser usadas em qualquer função que forem chamadas

int main() {

    int local1, local2; //só pd usar dentro da função main, ñ podem ser chamadas por outras funções
    int res;

    global1 = 6; //pode receber valor dentro da função
    global2 = 4; //mesmo dsendo global
    local1 = 9;
    local2 = 10;

    res = global1 + global2 + local1 + local2;

    cout << "Soma de todas as variaveis: " << res << endl;

    return 0;
}

/*
Variáveis Globais - São criadas fora de qualquer função, e podem ser usadas em todas as funções que for chamada
Variáveis Locais - Só podem ser usadas dentro daquela função da qual foi criada dentro.

Operadores Matemáticos: + - / * % ()

Para operadores:
+ soma
- subtração
/ dividir
* vezes
% mod / resto da divisão
() assim como na matemática normal, tudo que estiver dentro do parenteses será executado antes das outas contas
*/
