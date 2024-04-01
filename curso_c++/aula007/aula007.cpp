#include <iostream>

using namespace std;

int main() {
    int n1 = 10;

    cout << n1-- << endl; //valor inicial da variável
    cout << n1 << endl; //valor decrementado

    return 0;
}

/*

INCREMENTAÇÃO E DECREMENTAÇÃO:

INCREMENTAÇÃO:

n1 = n1 + 1;    incrementa mais de 1
n1 += 5;        incrementa mais de 1
n1++;           incrementa apenas 1

DECREMENTAÇÃO:

n1 = n1 - 1;    decrementa mais de 1
n1 -= 1;        decrementa mais de 1
n1--;           decrementa apenas 1

OUTROS:

n1 = n1 * 2;
n1 *= 2;

n1 = n1 / 2;
n1 /= 2;

------------------------------------------------------------------------------------------

n1++    -->     pós incremento / pós fixado
++n1    -->     pré incremento / pré fixado

n1++ primeiro ele usa a variável e depois incrementa
++n1 primeiro ele incrementa e depois usa a variavel

*/
