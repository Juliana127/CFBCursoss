#include <iostream>
#include <array>

using namespace std;

int main() {

	array<int,10> vt = {2,4,3,6,7,5,8,9,1,0};

	//cout << vt[3] << endl; //forma tradicional
	//cout << vt.at(3) << endl;

	cout << vt.front() << endl;
	cout << vt.back() << endl;

	return 0;
}
