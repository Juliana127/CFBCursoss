#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	int num = 10, den = 3;
	div_t res;

	res = div(num, den);

	cout << num << " dividido por " << den  << " = " << res.quot << " resto " << res.rem << endl;



	return 0;
}

/*
abs = absoluto
div = divis�o e resto
ldiv = long int divis�o
llabs = long long int absoluto
lldiv = long long int divis�o

rand_max = retorna valor m�ximo do rand

ldiv_t
lldiv_t
*/
