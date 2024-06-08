#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main() {

    list<int>num = {10,20,30,40,50,60,70} ;

    auto it=find(num.begin(), num.end(),60);

    if(it!=num.end()) {
        cout << "Numeral encontrado: " << *it << endl;
    } else {
        cout << "Numeral NAO encontrado!" << endl;
    }

	return 0;
}
