#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int>lst1 = {1, 2, 3, 4, 5};
    list<int>lst2 = {6, 7, 8, 9, 10};

    lst1.merge(lst2);
    lst1.reverse();

    for(auto x:lst1) {
        cout << x << "   ";
    }

	return 0;
}
