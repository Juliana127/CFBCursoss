#include <iostream>

using namespace std;

int main() {

	int cont = 20; //dará falso, mas será imprimido ao menos 1 vez

	do { //comando literalmente: faça!
        cout << "Canal Fessor Bruno - " << cont << endl;
        cont++;
	} while (cont < 20); //depois que impime 1 vez, que vai ser feito o teste lógico

	cout << "\n------Rotina finalizada------" << endl;

	return 0;
}

/*
Diferente dos outros loops, o 'do while' imprime seu bloco de código pelo menos uma vez, mesmo que sua condição não seja satisfeita, ao contrario do loop while que só imprime se for satisfeito e é ignorado se não for, o 'do while' imprime 1 vez, e continua depois de ser testado e vai até ser satisfeito.
*/
