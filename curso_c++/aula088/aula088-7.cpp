#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> vct1 ={5,1,3,0,9};
	vector<int> vct2= {2,4,6,7,8};

	//vct1.swap(vct2);
	vct2.clear();

	for(auto x:vct2) {
        cout << x << endl;
	}

	return 0;
}
