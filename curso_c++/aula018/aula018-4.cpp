#include <iostream>

using namespace std;

int main() {

	int vetor[5]={10, 20, 30, 40, 50};

	for(int i=0; i < sizeof(vetor)/4; i++) {
        cout << vetor[i] << endl;
	}

	return 0;
}

/*
e desta forma, o programa fica mais limpo, com a declara��o de cada espa�o do vetor j� na cria��o
mas  o prof disse que se for fazer desta forma, a vari�vel 'tamanho' n�o � necessaria, deve-se colocar na pr�pria cria��o de 'vetor' seu tamanho fixo e usar sizeof() para 'i', pra ele deu erro, mas para mim deu certo, talvez pelo tempo e pelas atualiza��es da linguagem de programa��o
*/
