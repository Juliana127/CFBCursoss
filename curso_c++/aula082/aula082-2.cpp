#include <iostream>
#include <cstring>

using namespace std;

struct{
    char nome[40];
}pessoa1,pessoa2;

int main() {

    char myName[]="Juliana";

    memcpy(pessoa1.nome, myName, strlen(myName)+1); //strlen() - retorna o tamanho da string indicada

    memcpy(pessoa2.nome, pessoa1.nome,sizeof(pessoa1.nome)+1);

    cout << pessoa2.nome << endl;

	return 0;
}
