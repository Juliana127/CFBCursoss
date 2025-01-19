#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int>vt = {2,4,12,7,8,10,12,-8,1,20,3,5,6,9,11,13,2,7,2};

    for(auto x:vt) {
        cout << x << "  ";
    }
    cout << "\n\n";

    /*
    //all_of = retorna true se o teste retornar true com todos os elementos da coleção
    if(all_of(vt.begin(), vt.end(), [](int i) {return i<50;})) {
        cout << "Todos sao menores que 50" <<  "\n\n";
    } else {
        cout << "Existe um ou mais elementos maiores que 50" <<  "\n\n";
    }

    //any_of = retorna true se o teste retornar true pelo menos com um dos elementos da coleção
    if(any_of(vt.begin(), vt.end(), [](int i) {return i>12;})) {
        cout << "Existe um ou mais elementos maiores que 12" <<  "\n\n";
    } else {
        cout << "Todos sao menores ou iguais a 12" <<  "\n\n";
    }

    if(none_of(vt.begin(), vt.end(), [](int i) {return i<0;})) {
        cout << "Todos sao positivos" <<  "\n\n";
    } else {
        cout << "Existe um ou mais elementos negativos" <<  "\n\n";
    }
    */

    /*
    //for_each = aplica uma função a todos os elementos da coleção
    cout << "Dobro" << endl;
    for_each(vt.begin(), vt.end(), [](int i){cout << i*2 << "  ";});
    cout << "\n\n";
    */

    /*
    //find = procura um elemento e retorna um iterator com o resultado
    auto it = find(vt.begin(), vt.end(), 43);
    cout << *it << "\n\n";
    */

    /*
    //find_if = procura um elemento que atenda a uma determinada condição e retorna um iterator com o resultado
    auto it2 = find_if(vt.begin(), vt.end(), [](int i){return((i%2)==1);});
    cout << "Primeiro elemento impar: " << *it2 << "\n\n";
    */

    /*
    //find_if_not = procura um elemento que NÃO atende a uma determinada condição e retorna um iterator
    auto it3 = find_if_not(vt.begin(), vt.end(), [](int i) {return((i%2)==1);});
    cout << "Primeiro elemento par: " << *it3 << "\n\n";
    */

    /*
    //count = quantidade de um determinado elemento na coleção
    cout << "Quantidade do numero 2: " << count(vt.begin(), vt.end(), 2) << "\n\n";
    */

    //count_if = quantidade de um determinado elemento na coleção, que atende a uma condição
    cout << "Quantidade de pares: " << count_if(vt.begin(), vt.end(), [](int i){return((i%2)==0);}) << endl;

	return 0;
}
