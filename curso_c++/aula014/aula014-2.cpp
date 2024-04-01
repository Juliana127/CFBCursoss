#include <iostream>

using namespace std;

int main() {

	int cont = 0;

	while(cont <= 20) {
        cout << "Canal Fessor Bruno - " << cont << endl;
        cont++; //pode ser feito o incremento ou decremento junto do teste lógico (cont ++< 20) desde que seja de 1 em 1, se for de mais, não
	}

	return 0;
}

/*
contagem reversa:

    int cont = 20;

    while(cont>0) {
        cout << "Canal Fessor Bruno - " << cont << endl;
        cont--;
	}

*/
