#include <iostream>

using namespace std;

int main() {

    //int num = 10, num2 = 50;
    int sol = 1; //intensidade do sol

    if(sol == 1) {
        cout << "Vou ao Clube";
    } else {
        cout << "Vou ao Cinema";
    }

    return 0;
}

/*

se(teste lógico) {
    se o teste for verdadeiro
} se não / caso contrario {
    se o teste for falso
}

São usados os operadores para teste lógico: >, <, >=, <=, ==, !=
Sendo eles:
>   Maior que
<   Menor que
>=  Maior ou Igual
<=  Menor ou Igual
==  Igual
!=  Diferente

Teste Lógico:
10 < 5 = false
50 > 25 = true
100 > (50*2) = false
100 >= (50*2) = true

if(teste)
se você não colocar o teste lógico, o programa internamente entendera como verdadeiro ou falso, levando como variavel booleana, ou seja, o teste do sol dara "Vou ao clube" sempre que seu valor inicial for 1, e "vou ao cinema" sempre que seu valor for 0, e se for mais que 0 ou 1 você deve fazer o teste lógico, já q só funcionara com 0 e 1.

*/
