#include <iostream>
#include <stdlib.h> //para o 'system'

using namespace std;

int main() {

	system("color 0a");

    system("dir");

	system("cls");

	cout << "Hello, World!" <<endl;

    system("pause");

	return 0;
}

/*
os parametros de 'system("");' � um comando do SO (o "cls" funciona no cmd, o "pause" para o .exe fora do codeblocks, etc)

Comandos de System:
dir - listagem de diret�rios e arquivos de onde o arquivo(o programa em execu��o) esta.
cls - limpa o cmd
color - muda cor de texto e fundo do cmd (meu fav: 0a)
pause - pausa o programa ao final do programa
*/
