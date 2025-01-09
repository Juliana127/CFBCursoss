#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> vct1 ={5,1,3,0,9};
	vector<int> vct2= {2,4,6,7,8};

	//vct1.emplace(vct1.begin()+2,9);
	vct1.emplace_back(9);

	for(auto x:vct1) {
        cout << x << endl;
	}

	return 0;
}
