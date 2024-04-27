#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> num1;
	int tam1, tam2;

	num1.push_back(10); num1.push_back(20); num1.push_back(30); num1.push_back(40); num1.push_back(50);

	//num1.insert(num1.begin(),888); //já q o vector insere no final, desse jeito insere no inicio
    num1.insert(num1.begin()+2,888);
    //num1.insert(num1.end(),888); //para colocar na ultima posição
    //num1.insert(num1.begin()-1,888); //para penúltima posição


	tam1 = num1.size();

	cout << "Primeiro elemento de num1: " << num1.front() << endl;
	cout << "Elemento do meio de num1.: " << num1.at(tam1/2) << endl;
	cout << "Ultimo elemento de num1..: " << num1.back() << "\n\n";

	for(int i = 0; i < tam1; i++) {
        cout << num1[i] << endl;
	}

	return 0;
}
