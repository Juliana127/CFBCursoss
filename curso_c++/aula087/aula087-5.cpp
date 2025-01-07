#include <iostream>
#include <array>

using namespace std;

int main() {

    array<int,10> vt = {2,4,3,6,7,5,8,9,1,0};
	array<int,10> cfb;

	cfb.fill(5);

	vt.swap(cfb);

	for(auto x:cfb) {
        cout << x << " - ";
	}
	cout << endl;

	for(auto x:vt) {
        cout << x << " - ";
	}
	cout << endl;

	return 0;
}
