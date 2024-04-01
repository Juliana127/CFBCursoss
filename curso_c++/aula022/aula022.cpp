#include <iostream>

using namespace std;

void texto(/*se tiver argumentos na função, quando for chamar aqui deve os colocar tbm*/);
//se não fizer isso, dará erro ao chamar na função main, então deve-se colocar aqui antes da função main

int main() {

    texto(/*se tiver argumentos na função, quando for chamar aqui deve os colocar tbm*/);
    texto();
    texto();
    texto();
    texto(); //posso chamar quantas vezes quiser

	return 0;
}

void texto() {
    cout << "Canal Fessor Bruno\n\n"; //por sí só n vai acontecer nd, apenas se for chamada na função principal/main
}

/*
função = um bloco de código que executa alguma operação(a primeira função do nss programa basico é a main)
void significa que essa função n deve retornar nd
*/
