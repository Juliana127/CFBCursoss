//Alocação dinâmica de memória
#include <iostream>
#include <stdio.h> //para gets funcionar
#include <stdlib.h> //para função malloc (memory allocation)

using namespace std;

int main() {

    char *varNome;
    varNome = (char *) malloc(sizeof(char));
    //varNome = (char *) malloc(sizeof(char)+1); //para o caracter finalizador, espaço reserva, mas ai as vezes n tem sentido fazer alocação dinâmica de memória pq se fazer isso só vai ocupar mais espaço
    //varNome = (char *) malloc(1+sizeof(char)); //tbm pd ser escrito assim, e etc

    gets(varNome); //parecido com o getline do string, mas esse para char

    cout << varNome << endl;

	return 0;
}

/*
o tamanho da variável 'varNome' nem sempre será totalmente usado, então isso é um problema, pois se for usado só um terço dela ainda vai sobrar muito espaço na memória guardado para nada, ou seja, peso desnecessario, e se num programa tiver que usar muitas vezes algo do tipo, esperando que seja pelo menos quase tudo usado a memória vai se ferrar pra arranjar tanto espaço pq tem coisa não usada mas ta guardada pra uma variável dessas, e a alocação dinâmica de memória ajuda muito nisso.

deve-se transformar em um ponteiro para funcionar o malloc, e não coloca um tamanho como: char varNome[50]

em si malloc retorna void para a variável, então se 'varNome' é um ponteiro deve-se transformar o malloc em ponteiro usando (char *)

cout << sizeof(char); //se precisar saber o tamanho de todas tem no outro arquivo do repositório

-------------------------------------------------------------------------------

a diferença de 'char varNome[50];' para 'char *varNome;' e o uso do 'malloc(sizeof(char));' é que, com um array fica sendo mantido 50 espaços q talvez nem seja usado, como disse antes, peso desnecessario, e com malloc, terá apenas o tamanho do que for escrito como peso, então fica muito mais leve, vamos supor q oq for escrito seja só 2 letras, na primeira versão os outros 48 espaços ainda estão guardados ocupando espaço, agr, só sera usado 2 espaços de td a memória(claro q junto com o caracter finalizador fica 3 mas vc entendeu)
*/
