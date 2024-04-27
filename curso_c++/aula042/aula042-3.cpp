#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> num1, num2;
	int tam;

	num1.push_back(1); num1.push_back(2); num1.push_back(3); num1.push_back(4);

	num2.push_back(5); num2.push_back(6); num2.push_back(7); num2.push_back(8);

	num1.swap(num2); //para fazer uma troca dos valores, oq esta em 'num1' vai para 'num2' e vice-versa

	tam = num1.size();

	cout << "Tamanho do vector: " << tam << endl;

	for(int i = 0; i < tam; i++) {
        cout << num1[i] << " ";
	}

	cout << endl;

    for(int i = 0; i < tam; i++) {
        cout << num2[i] << " ";
	}

	return 0;
}
