#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> valores{1,2,3,4,5};

	for(vector<int>::iterator it = valores.begin(); it !=valores.end(); it++) {
        cout << *it << " ";
    }

	return 0;
}
