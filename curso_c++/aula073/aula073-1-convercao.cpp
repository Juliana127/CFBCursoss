#include <iostream>
#include <cstdlib> //a mesma coisa que a biblioteca "stdlib.h" com a diferen�a que o "c" antes quer dizer que � a biblioteca reformulada, e o ".h" quer dizer que � uma biblioteca antiga

using namespace std;

int main() {

	double num;
	char numero[80];

	cin >> numero;
	//num = atof(numero); //converte double ou float
	num = strtod(numero, NULL); //tbm, mas precisa de um segundo parametro, caso n tenha, porde ser NULL (nulo)

	cout << num << endl;

	return 0;
}

/**
o 'f' de "atof()" � de float, mas funciona tanto em float quanto em double, e 'ato' de alfa (alfa para float)

(a - alfa, to - para, x - para qual sera convertido)
----------------------
Al�m de 'atof' temos tamb�m:
atof - para float e double
atoi - para inteiros
atol - long int
(c++11) atoll - long long int
astrtod - string para double
astrtof - string para float
astrtol - string para long int
astrtoll - long long int
**/
