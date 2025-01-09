#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> vct1 ={2,4,6,7,8,5,1,3,0,9};
	vector<int> vct2;

	//vct2.assign(10,0);
	//vct2.assign(vct1.begin(), vct1.end());

	//vct1.push_back(0);
	vct1.pop_back();

	//for(auto x:vct2) {
	for(auto x:vct1) {
        cout << x << endl;
	}

	return 0;
}
