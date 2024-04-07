#include <iostream>
#include <list>

using namespace std;

int main() {
    list <int> aula;
    int tam;
    list <int>::iterator it;

    tam=10;
    for(int i=0; i<tam; i++) {
        aula.push_front(i);
    }

    it=aula.begin();
    advance(it, 3); //iterator e posi��o 3
    aula.insert(it, 0); //iterator e valor 0 na posi��o 3

    aula.erase(it); //remove um elemento p�s, ou seja, o 3 fica na posi��o e o numero seguinte � removido
    //aula.erase(--it); //desse jeito remove o zero q coloquei

    cout << "Tamanho da lista: " << aula.size() << endl;

    tam=aula.size();
    for(int i=0; i<tam; i++) {
        cout << aula.front() << endl;
        aula.pop_front();
    }

    cout << "Tamanho da lista: " << aula.size() << endl;

    return 0;
}

/*
erase - apaga numero seguinte ou oq vc add
*/
