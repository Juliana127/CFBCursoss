#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> vct ={2,4,6,7,8,5,1,3,0,9};
	vector<int>::iterator it;

	it = vct.begin()+5;
	//it = vct.end()-5;
	//vct.insert(it,11);
	vct.insert(it,5,9); //inserir 5 vezes o 9

	for(auto x:vct) {
        cout << x << endl;
	}

	return 0;
}
