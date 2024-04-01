#include <iostream>

using namespace std;

int main() {

	int cont = 20; //dar� falso, mas ser� imprimido ao menos 1 vez

	do { //comando literalmente: fa�a!
        cout << "Canal Fessor Bruno - " << cont << endl;
        cont++;
	} while (cont < 20); //depois que impime 1 vez, que vai ser feito o teste l�gico

	cout << "\n------Rotina finalizada------" << endl;

	return 0;
}

/*
Diferente dos outros loops, o 'do while' imprime seu bloco de c�digo pelo menos uma vez, mesmo que sua condi��o n�o seja satisfeita, ao contrario do loop while que s� imprime se for satisfeito e � ignorado se n�o for, o 'do while' imprime 1 vez, e continua depois de ser testado e vai at� ser satisfeito.
*/
