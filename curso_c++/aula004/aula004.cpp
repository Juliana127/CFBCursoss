#include <iostream>

using namespace std;

int main() {

    //TIPO NOME;
    //TIPO NOME = VALOR;

    int inteiro = 0;                //recebe n�meros inteiros: 10, 20, 30, etc
    char letra = 'A';               //recebe letras, mas pd receber mais de uma se usar colchetes []
    double decimal = 5.2;           //n�meros reais grandes 2.49999999
    float decimal2 = 5.2;           //n�meros reais pequenos 2.5
    bool verdade = false;           //true(1) or false(0)
    string texto = "nome";            //recebe textos, ao contrario do char

    cout << inteiro << endl << letra << endl << decimal << endl << decimal2 << endl << verdade << endl << texto <<endl;

    return 0;
}

//comentario de linha simples
/*
bloco de comentario
*/

/*
Precisamos das variaveis para ter um recurso de troca de informa��o, de armazenamento de informa��o temporaria, j� que a mem�ria RAM � volatiu e armazena somente enquanto o computador esta ligado.
Deve-se iniciar a variavel em algum momento do programa, j� que caso n seja feito, pode ser que o resultado dessa variavel saia um "LIXO" (valor que esta na variavel do qual o programador n�o colocou)
*/
