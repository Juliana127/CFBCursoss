#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> vct ={2,4,6,7,8,5,1,3,0,9};

	for(auto it = vct.begin(); it != vct.end(); it++) {
        cout << *it << endl;
	}
	return 0;
}
