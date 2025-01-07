#include <iostream>
#include <array>

using namespace std;

int main() {

	array<int,10> cfb;

	cfb.fill(7);

	for(auto x:cfb) {
        cout << x << endl;
	}

	return 0;
}
