#include <iostream>

using namespace std;

int main() {
    int n1 = 10;

    cout << n1-- << endl; //valor inicial da vari�vel
    cout << n1 << endl; //valor decrementado

    return 0;
}

/*

INCREMENTA��O E DECREMENTA��O:

INCREMENTA��O:

n1 = n1 + 1;    incrementa mais de 1
n1 += 5;        incrementa mais de 1
n1++;           incrementa apenas 1

DECREMENTA��O:

n1 = n1 - 1;    decrementa mais de 1
n1 -= 1;        decrementa mais de 1
n1--;           decrementa apenas 1

OUTROS:

n1 = n1 * 2;
n1 *= 2;

n1 = n1 / 2;
n1 /= 2;

------------------------------------------------------------------------------------------

n1++    -->     p�s incremento / p�s fixado
++n1    -->     pr� incremento / pr� fixado

n1++ primeiro ele usa a vari�vel e depois incrementa
++n1 primeiro ele incrementa e depois usa a variavel

*/
