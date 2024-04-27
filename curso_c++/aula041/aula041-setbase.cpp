#include <iostream>
#include <iomanip> //para o setbase
#include <math.h> //

using namespace std;

int main() {

	int num = 10;
	float pi = M_PI;

	cout << "Convertendo base Hexa: " << setbase(16) << num << endl;
	cout << "Convertendo base Octal: " << setbase(8) << num << "\n\n";

	cout.precision(4); //para dar com precisão ao 'cout' q saia 2 casas decimais depois da virgula do pi(é como se o ponto contace então se colocar o num 2 só sai um num depois da virgula)
	cout << "Valor de PI: " << pi << endl;

	cout.precision(-1); //'-1' para voltar ao normal, n ficar apenas com a quantidade de casas decimais definida anteriormente
    cout << "Valor de PI: " << pi << "\n\n";

	cout << "Valor de PI com notacao cientifica: " << std::scientific << pi << endl;

	return 0;
}
