#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <string> produtos = {"mouse", "teclado", "monitor", "gabinete", "caixa.som"};
	vector <string>::iterator it;

	//advance(it, 3);
    //cout << *prev(it,1) << endl; //da direita para esquerda
	//cout << *next(it,3) << endl; //da esquerda para direita

	//for(vector <string>::iterator it = produtos.begin(); it!= produtos.end(); it++) //pd ser q encontre assim
	for(it = produtos.begin(); it!= produtos.end(); it++) {
        cout << *it << endl;
	}

	return 0;
}

/*
advance, next, prev

iterator = criar uma forma de navegar pelos itens de uma coleção
*/
