#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> num1;
	int tam;

	num1.push_back(10); num1.push_back(20); num1.push_back(30); num1.push_back(40); num1.push_back(50);

	tam = num1.size();

	cout << "Tamanho atual de num1: " << num1.size() << endl;

	for(int i = 0; i < tam; i++) {
        cout << num1[i] << endl;
	}

	num1.clear();

	cout << "Novo tamanho de num1: " << num1.size() << endl;

	return 0;
}

/*
jogo de cartas pd ser feito com o vector
*/
