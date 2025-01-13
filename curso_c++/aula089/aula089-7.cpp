#include <iostream>
#include <list>

using namespace std;

bool par(const int& value) {
    return ((value%2)==0)/*0 para par, 1 para impar*/;
}

int main() {

    //list<int>lst1 = {0,1,0,2,0,3,0,4,0,5,0,6,0,7,0,8,0,9};
    list<int>lst1 = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    //lst1.remove(0);
    lst1.remove_if(par);

    for(auto x:lst1) {
        cout << x << "   ";
    }

    return 0;
}
