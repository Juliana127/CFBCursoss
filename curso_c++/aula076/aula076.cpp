#include <iostream>
#include <typeinfo>

using namespace std;

class CFB{};

int main() {

	auto num{"po"};
    cout << "Tipo de num: " << typeid(num).name() << endl;

	CFB cfb;
	cout << typeid(cfb).name() << endl; //o numero refere-se ao numero de caracteres

	return 0;
}

/*
oq colocar como valor dara uma letra diferente:
i - int
d - double
c - char
Pkc - string
*/
