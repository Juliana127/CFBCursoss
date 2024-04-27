#include <iostream>
#include <iomanip> //para o 'setw'

using namespace std;

int main() {

	int num = 30;

	//cout << "Valor de num:" << setw(10) << num << endl; //para colocar um espaço definido pelo 'setw(algumaCoisa)'
	cout << "Valor de num:" << setw(10) << setfill('-') << num << endl; //para preencher o espaço com algo

	return 0;
}
