#include <iostream>

using namespace std;

void texto(/*se tiver argumentos na fun��o, quando for chamar aqui deve os colocar tbm*/);
//se n�o fizer isso, dar� erro ao chamar na fun��o main, ent�o deve-se colocar aqui antes da fun��o main

int main() {

    texto(/*se tiver argumentos na fun��o, quando for chamar aqui deve os colocar tbm*/);
    texto();
    texto();
    texto();
    texto(); //posso chamar quantas vezes quiser

	return 0;
}

void texto() {
    cout << "Canal Fessor Bruno\n\n"; //por s� s� n vai acontecer nd, apenas se for chamada na fun��o principal/main
}

/*
fun��o = um bloco de c�digo que executa alguma opera��o(a primeira fun��o do nss programa basico � a main)
void significa que essa fun��o n deve retornar nd
*/
