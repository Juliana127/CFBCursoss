#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int>numeros;
    vector<int>::iterator it;
    int num,qtde = 5; //só pode ser add valores até esse maximo (5), depois disso o programa acaba

    while(qtde > 0) {
        cout << "Digite um numeral: ";
        cin >> num;

        it=find(numeros.begin(), numeros.end(),num);

        if(it!=numeros.end()) {
            cout << "Numeral ja existe." << endl;
        } else {
            numeros.push_back(num);
            qtde--;
    }

    }

	return 0;
}
