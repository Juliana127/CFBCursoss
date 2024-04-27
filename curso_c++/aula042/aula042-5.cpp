#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> num1;
	int tam;

	num1.push_back(10); num1.push_back(20); num1.push_back(30); num1.push_back(40); num1.push_back(50);

    num1.erase(num1.end()-3); //apaga uma posição

	tam = num1.size();

	for(int i = 0; i < tam; i++) {
        cout << num1[i] << endl;
	}

	return 0;
}
