#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int>lst1 = {1,2,3,4};
    list<int>lst2;
    list<int>::iterator it;

    it = lst1.begin();
    ++it;


    lst1.erase(it);


    for(auto x:lst1) {
        cout << x << "  ";
    }

	return 0;
}
