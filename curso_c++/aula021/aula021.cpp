#include <iostream>
#include <string.h> //para poder chamar o strcmp - serve para fazer uma compara��o entre 2 strings, ai a explica��o do prof q n entendi nd
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {

    if(argc > 1) {
        if(!strcmp(argv[1],"sol")) {
            cout << "Vou ao clube" << endl;
        } else if(!strcmp(argv[1],"nublado")) {
            cout << "Vou ao cinema" << endl;
        } else {
            cout << "Vou ficar em casa" << endl;
        }
    }

    system("pause"); //propriedades do atalho do .exe

	return 0;
}

/*
argc = guarda a quantdade de parametros informado, se foi passado um parametro, dois, etc, ser� guardado aqui

*argv[] = � um ponteiro (o simbolo asterisco * mostra que � um ponteiro), ele � um ponteiro para uma matriz de ponteiros de caractere, quando eu passo um valor ser� apontado para uma �rea da matriz e � guardado l� esse velor

ou sej�, um guarda a quantidade de argumentos que tem, e o segundo guarda os argumentos

e o primeiro argumento (mesmo q vc n tenha escrito nenhum ainda) � o nome do programa, por padr�o da linguagem
*/

/*
    cout << argv[1] << endl;
    cout << argc << endl;

brinque com isso igual o prof fez na aula com o cmd adm
*/
