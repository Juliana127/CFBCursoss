#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int>vt={5,10,7,3,8,9,4,2,1,0};
    vector<int>vt2={11,12,13};
    vector<int>::iterator it, it1, it2;

    for(it = vt.begin(); it != vt.end(); it++) {
        cout << *it << "  ";
    }
    cout << "\n\n";

    it1 = vt.begin();
    it2 = vt.end()-1;

    cout << "Primeiro elemento.: " << *it1 << "\nUltimo elemento...: " << *it2 << endl;

    advance(it1,2);
    cout << "Terceiro elemento.: " << *it1 << endl;
    advance(it2, -1);
    cout << "Penultimo elemento: " << *it2 << endl;

    cout << "Valores entre it1 e it2: " << distance(it1, it2)-1 << endl;

    cout << *it1 << " - antes: " << *prev(it1) << " depois: " << *next(it1) << endl;

    //copy(vt2.begin(), vt2.end(), back_inserter(vt));
    //copy(vt2.begin(), vt2.end(), front_inserter(vt));
    copy(vt2.begin(), vt2.end(), inserter(vt, vt.begin()+5));

    for(it = vt.begin(); it != vt.end(); it++) {
        cout << *it << "  ";
    }

    cout << "\n\n";

	return 0;
}
