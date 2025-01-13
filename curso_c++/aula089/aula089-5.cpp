#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int>lst1 = {1, 2, 3, 4, 5};
    list<int>lst2 = {6, 7, 8, 9, 10};

    //lst1.swap(lst2);
    //lst2.resize(3);

    lst1.clear();
    lst2.clear();


    for(auto x:lst1) {
        cout << x << "   ";
    }

    cout << endl;

    for(auto x:lst2) {
        cout << x << "   ";
    }

	return 0;
}
