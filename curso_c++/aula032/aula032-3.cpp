#include <iostream>
#include <list>

using namespace std;

int main() {
    list <int> aula, teste;
    int tam;
    list <int>::iterator it;

    teste.push_front(20); //segunda lista pra mesclagem
    teste.push_front(20);
    teste.push_front(20);
    teste.push_front(20);

    tam=10;
    for(int i=0; i<tam; i++) {
        aula.push_front(i);
    }

    aula.merge(teste); //só isso já faz aparecer os resultados da lista 'teste' com a lista 'aula', tira os elementos da lista teste a da para lista aula

    cout << "Tamanho da lista: " << aula.size() << endl;

    tam=aula.size();
    for(int i=0; i<tam; i++) {
        cout << aula.front() << endl;
        aula.pop_front();
    }

    return 0;
}
