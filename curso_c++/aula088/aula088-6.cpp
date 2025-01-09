#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> vct ={2,4,6,7,8,5,1,3,0,9};
	vector<int>::iterator it;

	it = vct.end()-1;
	//vct.erase(it);
	vct.erase(vct.begin()+6,vct.end());

	for(auto x:vct) {
        cout << x << endl;
	}

	return 0;
}
