#include <iostream>

using namespace std;

int main() {

	char varNome[5]; //escreva: Canal Fessor Bruno

	gets(varNome);
	cout << varNome;

	return 0;
}

/*
n�o da erro, mas pd ser fatal para o programa ou sistema quando o espa�o de um array for excedido, j� q os dados a mais recebidos pelo array pode sobrepor algum dado importante para o programa ou para o sistema. Por isso � melhor usar o malloc e ponteiro, para n�o dar uma dor de cabe�a pra vc e para outras pessoas
*/
