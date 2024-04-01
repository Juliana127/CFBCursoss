#include <iostream>

using namespace std;

void soma(int n1, int n2);
void soma();

int main() {

    soma(5,2);
    soma();

	return 0;
}

void soma(int n1, int n2) {
    int resultado;
    resultado = n1 * n2;

    cout << "Multiplicacao de " << n1 << " com " << n2 << " = " << resultado << "\n\n";
}

void soma() {
    int n1 = 5, n2 = 2, resultado;
    resultado = n1 + n2;

    cout << "Soma de " << n1 << " com " << n2 << " = " << resultado << endl;
}



/*
o prof disse que sobrecarga de funções é quase exclusiva de c++
pode se ter 2 ou mais funções com o mesmo nome, DESDE QUE tenham valores de entrada diferentes(argumentos)
*/
