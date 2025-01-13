#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int>lst1 = {1,2,3,4};
    list<int>lst2;
    list<int>::iterator it;

    it = lst1.begin();

    ++it; //2° posição (para ir para direita)
    //--it; //para voltar uma posição
    ++it; //3° posição

    lst1.insert(it, 8);


    for(auto x:lst1) {
        cout << x << "  ";
    }

	return 0;
}
