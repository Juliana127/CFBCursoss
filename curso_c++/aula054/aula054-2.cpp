#include <iostream>

using namespace std;

double divide(double n3, double n4) {

    if((n3==0)or(n4==0)) {
        throw "Erro de divisao por ZERO!";
    }

    if(n3 >= 10) {
        throw "N1 nao pode ser maior que 10";
    }

    return n3/n4;
}

int main() {

	double n1, n2;

	cin >> n1 >> n2;

	try {
        cout << divide(n1, n2);
	} catch(const char* e) {
        cout << "ERROR: " << e << endl;
	}

	return 0;
}
