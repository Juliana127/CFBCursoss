#include <iostream>
#include <list>

using namespace std;

int main() {


    list<int>lst1 = {0,4,5,7,8,9,0,11,2,3,12,13,120,9};

    lst1.sort(); //deixa em ordem crescente
    lst1.unique(); //apaga numeral duplicado

    for(auto x:lst1) {
        cout << x << "   ";
    }

    return 0;
}
