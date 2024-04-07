#include <iostream>
#include <list> //biblioteca de listas

using namespace std;

int main() {

	list <int> aula;
	int tamanho=10;

    for(int i = 0; i < 10; i++) {
        aula.push_back(i); //adiciona valor
        //aula.push_front(i); //imprime de traz para frente(ou seja, de 9 a 0)
        //aula.push_back(i); //imprime de frente para traz(ou seja, de 0 a 9)
    }

    cout << "Tamanho da lista: " << aula.size() << endl;

    tamanho = aula.size(); //mostrar o tamanho
    for(int i = 0; i < tamanho; i++) {
        cout << aula.front() << endl; //imprime o que est� na frente da lista
        aula.pop_front(); //retira o que esta na frente da lista (com back claro q retira de traz at� a frente)
    }

	return 0;
}

/*
list <int> aula(5,50);
o primeiro valor do parenteses �: 5 posi��es
o segundo �: cada posi��o tem o valor 50

e para fazer mais listas de mesmo tipo, � s� fazer assim com em vari�veis, colocando as virgulas entre cada uma:
list <int> aula, canal, teste;
*/
