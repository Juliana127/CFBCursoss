#include <iostream>
#include <list>

using namespace std;

int main() {

	list <int> aula;
	int tamanho=10;
	list <int>::iterator interacao;

    for(int i = 0; i < 10; i++) {
        aula.push_front(i);
    }

    interacao = aula.begin();
    advance(interacao,5); //advance = avance para a posição 5

    aula.insert(interacao,0); //para inserir na posição pré determinada (ou seja, posição 5, o valor 0)

    cout << "Tamanho da lista: " << aula.size() << endl;

    tamanho = aula.size(); //por conta do insert e iterator vai sair 11
    for(int i = 0; i < tamanho; i++) {
        cout << aula.front() << endl;
        aula.pop_front();
    }

	return 0;
}

/*
o '::interator' serve para "interagir" com a lista, ou seja, vc pd add valor a lista não mais se prendendo a apenas inicio e fim da mesma, agr podendo fazer no meio, antes do final e etc
*/
