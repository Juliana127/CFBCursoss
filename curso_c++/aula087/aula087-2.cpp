#include <iostream>
#include <array>

using namespace std;

int main() {

	array<int,10> vt = {2,4,3,6,7,5,8,9,1,0};

	cout << vt.size() << endl;
	cout << vt.max_size() << endl;

	if(vt.empty()) {
        cout << "Array Vazio" << endl;
	} else {
        cout << "Array Nao Esta Vazio" << endl;
	}

	return 0;
}
