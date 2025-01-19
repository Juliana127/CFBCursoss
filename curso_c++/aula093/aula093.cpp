#include <iostream>
#include <queue> //fifo = first-in first-out

using namespace std;

int main() {

    queue<int>fila1, fila2;

    fila2.push(10);
    fila2.push(20);
    fila2.push(30);
    fila2.push(40);
    fila2.push(50);
    fila2.emplace(60);
    fila2.emplace(70);

    fila2.swap(fila1);

    cout << "Primeiro elemento: " << fila1.front() << endl;
    cout << "Ultimo elemento:" << fila1.back() << endl;
    cout << "Tamanho: " << fila1.size() << endl;

    while(!fila1.empty()){
        cout << fila1.front() << " - ";
        fila1.pop();
    }

    if(fila1.empty()) {
        cout << "\nFila Vazia" << endl;
    } else {
        cout << "Tamanho: " << fila1.size() << endl;
    }

	return 0;
}
