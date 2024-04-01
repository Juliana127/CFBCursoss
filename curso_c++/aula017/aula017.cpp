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
Loop for será mt importante para o curso, pois tem uma facilidade para trabalhar com vetores(arrays/matrizes)

No loop for, dentro da sintaxe de construção do loop, se coloca 3 parametros que definem o comportamento do loop

1 Parametro - inicialização da variavel de controle do loop

2 Parametro - condicional de execução desse loop (o teste lógico, em quanto o teste for verdadeiro continua a executar as interações)

3 Parametro - incremento/decremento da variável de controle, o contador

fica assim:

    for( x = 0 ; x < 10 ; x++ ) {
        comandos;
    }

    for(inicio ; condicional ; incremento/decremento)

*/
