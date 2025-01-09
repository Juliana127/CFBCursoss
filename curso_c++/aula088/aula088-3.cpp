#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> vct ={2,4,6,7,8,5,1,3,0,9};

	cout << vct[3] << endl; //tradicional
	cout << vct.at(3) << endl; //outra forma de fazer a mesma coisa

	cout << vct.front() << endl;
	cout << vct.back() << endl;

	return 0;
}
