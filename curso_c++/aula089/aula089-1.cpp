#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int>lst1;
    list<int>lst2(10,0); //sera immprimido 10x o numeral 0
    list<int>lst3(lst2);
    list<int>lst4 = {1,2,3,4};

    for(auto it = lst4.begin(); it != lst4.end(); it++) {
        cout << *it << "   ";
    }

    cout << endl << "Tamanho: " << lst4.size() << endl;
    cout << "Capacidade Maxima: " << lst4.max_size() << endl;
    cout << "Primeiro elemento: " << lst4.front() << endl;
    cout << "Ultimo elemento: " << lst4.back() << endl;

    if(lst4.empty()) {
        cout << "Lista vazia" << endl;
    } else {
        cout << "Lista nao esta vazia" << endl;
    }

	return 0;
}
