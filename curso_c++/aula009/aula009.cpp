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

se(teste l�gico) {
    se o teste for verdadeiro
} se n�o / caso contrario {
    se o teste for falso
}

S�o usados os operadores para teste l�gico: >, <, >=, <=, ==, !=
Sendo eles:
>   Maior que
<   Menor que
>=  Maior ou Igual
<=  Menor ou Igual
==  Igual
!=  Diferente

Teste L�gico:
10 < 5 = false
50 > 25 = true
100 > (50*2) = false
100 >= (50*2) = true

if(teste)
se voc� n�o colocar o teste l�gico, o programa internamente entendera como verdadeiro ou falso, levando como variavel booleana, ou seja, o teste do sol dara "Vou ao clube" sempre que seu valor inicial for 1, e "vou ao cinema" sempre que seu valor for 0, e se for mais que 0 ou 1 voc� deve fazer o teste l�gico, j� q s� funcionara com 0 e 1.

*/
