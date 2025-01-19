#include <iostream>
#include <stack> //tipo lifo = last-in first-out

using namespace std;

int main() {

     stack<int> pilha1, pilha2;

    pilha2.push(10);
    pilha2.push(20);
    pilha2.push(30);
    pilha2.push(40);
    pilha2.push(50);

    pilha2.emplace(60);

    pilha2.swap(pilha1);

    cout << "Numero de elementos da pilha: " << pilha1.size() << endl;

    while(!pilha1.empty()) {
        cout << pilha1.top() << endl;
        pilha1.pop(); //sem isso fica um loop infinito, e com isso podemos ver todos os valores já que vai sendo apagado um por um uma vez que já foi imprimido
    }

    if(pilha1.empty()) {
        cout << "Pilha vazia" << endl;
    } else {
        cout << "Pilha com elementos" << endl;
    }

	return 0;
}
