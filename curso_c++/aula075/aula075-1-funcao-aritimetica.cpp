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
div = divisão e resto
ldiv = long int divisão
llabs = long long int absoluto
lldiv = long long int divisão

rand_max = retorna valor máximo do rand

ldiv_t
lldiv_t
*/
