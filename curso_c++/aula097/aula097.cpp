#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int> vt1 {1,4,7,2,5,8,3,6,9,0};
    vector<int> vt2 {1,4,7,2,5,8,3,6,9,0};
    vector<int> vt3 {0,1,2,3,4,5,6,7,8,9};
    vector<int> vt4 {2,5,8};
    vector<int> vt5 {10,11,12};
    vector<int>::iterator it;

    //equal = verifica se os elementos de uma coleção são iguais aos de outra
    cout << "EQUAL" << endl;
    if(equal(vt1.begin(), vt1.end(), vt2.begin())) {
        cout << "Colecoes iguais" << endl;
    } else {
        cout << "Colecoes diferentes" << endl;
    }

    cout << endl;

    //search = pesquisa se uma coleção está em outra
    cout << "SEARCH" << endl;
    it = search(vt1.begin(), vt1.end(), vt4.begin(), vt4.end());
    if(it!=vt1.end()) {
        cout << "Colecao encontrada na posicao " << it-vt1.begin() << endl;
    } else {
        cout << "Colecao nao encontrada" << endl;
    }

    cout << endl;

    //copy = copia elementos de uma coleção em outra, mas não cria novas posições
    cout << "COPY" << endl;
    copy(vt5.begin(),vt5.end(), vt3.begin());
    for(auto x:vt3) {
        cout << x << "  ";
    }

    cout << "\n\n";

    //copy_if = copia elementos de uma coleção em outra que atendam a uma condição, mas não cria novas posições
    cout << "COPY_IF" << endl;
    copy_if(vt5.begin(), vt5.end(), vt1.begin(), [](int i){return (i%2)==0;}); //copia somente os pares
    for(auto x:vt1) {
        cout << x << "  ";
    }

    cout << "\n\n";

    //move = move elementos de uma coleção para outra
    cout << "MOVE" << endl;
    vt4=move(vt1);
    for(auto x:vt4) {
        cout << x << "  ";
    }

    cout << "\n\n";

    //swap = troca os elementos de duas coleções
    swap(vt2,vt3);

    //transform = aplica uma finção que altera os valores de uma coleção
    cout << "TRANSFORM" << endl;
    transform(vt5.begin(), vt5.end(),vt5.begin(), [](int i){return i*100;});
    for(auto x:vt5) {
        cout << x << "  ";
    }

    cout << "\n\n";

    //replace = substitui um determinado valor de uma coleção por outra
    replace(vt2.begin(), vt2.end(), 5,500); //substitui todos os valores 5 por 500
    for(auto x:vt2) {
        cout << x << "  ";
    }

    cout << endl;

	return 0;
}
