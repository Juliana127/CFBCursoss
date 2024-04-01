#include <iostream>

using namespace std;

int retorna(int n1, int n2);

int main() {

    int resultado=retorna(5,10);

	cout << "Resultado: " << resultado << endl;
	cout << "Retorna: " << retorna(15,15) << endl; //ou pode fazer direto sem variáveis a mais

	return 0;
}

int retorna(int n1, int n2) {

    return n1+n2; //sempre que for usado uma função diferente de void, tem que colocar um return na função
}
