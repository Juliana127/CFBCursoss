#include <iostream>

using namespace std;

int main() {

    int num;

    cout << "Digite um valor: ";
    cin >> num;

    if(num > 4 && num < 7) {
        cout << "\nValor aceito\n"; //AND = 5 e 6, OR = 1,2 e 9,10
    } else {
        cout << "\nValor nao aceito\n"; //AND, OR = todos os outros
    }

	return 0;
}

/*

1 = true
0 = false

AND / && / E

Operador lógico onde o valor de resposta da operação é verdadeiro se todas as variáveis de entrada forem verdadeiras.
0   0   =   0
0   1   =   0
1   0   =   0
1   1   =   1

OR / || / OU

Operador lógico onde o valor de resposta da operação é verdadeiro se pelo menos uma das variáveis de entrada for verdadeira.
0   0   =   0
0   1   =   1
1   0   =   1
1   1   =   1

Aqui tem que estar ambos operações veradeiras (ou seja, tem que ser 5 ou 6 o valor digitado)

e negação é com '!' antes da variável dentro dos parenteses do if

*/
