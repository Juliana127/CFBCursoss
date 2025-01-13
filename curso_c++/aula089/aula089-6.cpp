#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int>lst1 = {1, 2, 3, 4, 5};

    //lst1.emplace(++ ++ ++lst1.begin(),9);
    lst1.emplace_back(9);
    lst1.emplace_front(9);


    for(auto x:lst1) {
        cout << x << "   ";
    }

	return 0;
}
