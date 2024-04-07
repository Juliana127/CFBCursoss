#include <iostream>
#include <list>

using namespace std;

int main() {

	list <int> aula;
	int tamanho=10;
	list <int>::iterator interacao;

    for(int i = 0; i < 10; i++) {
        aula.push_front(i);
        /*aula.push_front(4);
        aula.push_front(7);
        aula.push_front(2);
        aula.push_front(6);
        aula.push_front(8);
        aula.push_front(9);
        aula.push_front(3);
        aula.push_front(5);*/
    }

    cout << "Tamanho da lista: " << aula.size() << endl;

    //aula.sort(); //ele arruma os valores, se estivesse desorganizado por exemplo
    aula.reverse();

    tamanho = aula.size();
    for(int i = 0; i < tamanho; i++) {
        cout << aula.front() << endl;
        aula.pop_front();
    }

	return 0;
}

/*
reverse - inverte
sort - ordena/organiza
*/
