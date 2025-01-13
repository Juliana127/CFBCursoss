#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int>lst1 = {1,2,3,4};
    list<int>lst2;

    //lst2.assign(10,4);
    //lst2.assign(lst1.begin(), lst1.end());

    //lst1.push_back(8);
    //lst1.push_front(8);

    lst1.pop_back();
    lst1.pop_front();

    for(auto x:lst1) {
        cout << x << "  ";
    }

	return 0;
}
