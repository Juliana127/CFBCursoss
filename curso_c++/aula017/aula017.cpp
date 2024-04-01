#include <iostream>

using namespace std;

int main() {

	int x;

	for(x = 0; x <= 10; x++) {
        cout << x << endl;
	}

	return 0;
}

/*
Loop for ser� mt importante para o curso, pois tem uma facilidade para trabalhar com vetores(arrays/matrizes)

No loop for, dentro da sintaxe de constru��o do loop, se coloca 3 parametros que definem o comportamento do loop

1 Parametro - inicializa��o da variavel de controle do loop

2 Parametro - condicional de execu��o desse loop (o teste l�gico, em quanto o teste for verdadeiro continua a executar as intera��es)

3 Parametro - incremento/decremento da vari�vel de controle, o contador

fica assim:

    for( x = 0 ; x < 10 ; x++ ) {
        comandos;
    }

    for(inicio ; condicional ; incremento/decremento)

*/
