#include <iostream>
#include <vector>

using namespace std;

int main() {

	auto maior=[](vector<int>n)->int{
	    auto m=0;

	    for(int x:n){
            m=(m>x)? m : x;
	    }

	    return m;
	};

	cout << maior({2,3,5,78,24,657,13,45}) << endl;

	return 0;
}
