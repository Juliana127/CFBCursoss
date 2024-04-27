#include <iostream>

using namespace std;

int main() {

	char varNome[5]; //escreva: Canal Fessor Bruno

	gets(varNome);
	cout << varNome;

	return 0;
}

/*
não da erro, mas pd ser fatal para o programa ou sistema quando o espaço de um array for excedido, já q os dados a mais recebidos pelo array pode sobrepor algum dado importante para o programa ou para o sistema. Por isso é melhor usar o malloc e ponteiro, para não dar uma dor de cabeça pra vc e para outras pessoas
*/
