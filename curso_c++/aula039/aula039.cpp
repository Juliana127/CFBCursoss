//Aloca��o din�mica de mem�ria
#include <iostream>
#include <stdio.h> //para gets funcionar
#include <stdlib.h> //para fun��o malloc (memory allocation)

using namespace std;

int main() {

    char *varNome;
    varNome = (char *) malloc(sizeof(char));
    //varNome = (char *) malloc(sizeof(char)+1); //para o caracter finalizador, espa�o reserva, mas ai as vezes n tem sentido fazer aloca��o din�mica de mem�ria pq se fazer isso s� vai ocupar mais espa�o
    //varNome = (char *) malloc(1+sizeof(char)); //tbm pd ser escrito assim, e etc

    gets(varNome); //parecido com o getline do string, mas esse para char

    cout << varNome << endl;

	return 0;
}

/*
o tamanho da vari�vel 'varNome' nem sempre ser� totalmente usado, ent�o isso � um problema, pois se for usado s� um ter�o dela ainda vai sobrar muito espa�o na mem�ria guardado para nada, ou seja, peso desnecessario, e se num programa tiver que usar muitas vezes algo do tipo, esperando que seja pelo menos quase tudo usado a mem�ria vai se ferrar pra arranjar tanto espa�o pq tem coisa n�o usada mas ta guardada pra uma vari�vel dessas, e a aloca��o din�mica de mem�ria ajuda muito nisso.

deve-se transformar em um ponteiro para funcionar o malloc, e n�o coloca um tamanho como: char varNome[50]

em si malloc retorna void para a vari�vel, ent�o se 'varNome' � um ponteiro deve-se transformar o malloc em ponteiro usando (char *)

cout << sizeof(char); //se precisar saber o tamanho de todas tem no outro arquivo do reposit�rio

-------------------------------------------------------------------------------

a diferen�a de 'char varNome[50];' para 'char *varNome;' e o uso do 'malloc(sizeof(char));' � que, com um array fica sendo mantido 50 espa�os q talvez nem seja usado, como disse antes, peso desnecessario, e com malloc, ter� apenas o tamanho do que for escrito como peso, ent�o fica muito mais leve, vamos supor q oq for escrito seja s� 2 letras, na primeira vers�o os outros 48 espa�os ainda est�o guardados ocupando espa�o, agr, s� sera usado 2 espa�os de td a mem�ria(claro q junto com o caracter finalizador fica 3 mas vc entendeu)
*/
