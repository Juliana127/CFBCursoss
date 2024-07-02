#include <iostream>
#include <typeinfo>

using namespace std;

int main() {

	if(typeid(char).before(typeid(int))) {
        cout << "Int vem antes de Char." << endl;
	} else {
        cout << "Char vem antes de Int." << endl;
	}
	//Apenas para ver qual tipo vem antes do que

	return 0;
}
