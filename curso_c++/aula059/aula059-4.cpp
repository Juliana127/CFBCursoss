#include <iostream>
#include <vector>

using namespace std;

int main() {

	auto soma=[](vector<int>n)->int {
        auto s = 0;
        for(int x:n) {
            s+=x;
        }
        return s;
	};

	cout << soma({40,60}) << endl;


	return 0;
}
