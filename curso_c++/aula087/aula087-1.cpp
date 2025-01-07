#include <iostream>
#include <array>

using namespace std;

int main() {

	array<int,10> vt = {2,4,3,6,7,5,8,9,1,0};

	for(auto it=vt.begin(/*rbegin*/);it!=vt.end(/*rend*/); it++) {
        cout << *it << endl;
	}

	return 0;
}
