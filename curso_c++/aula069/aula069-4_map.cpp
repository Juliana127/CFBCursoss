#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {

    map<char,int>mapa;
    mapa['a']=19;
    mapa['b']=28;
    mapa['c']=37;
    mapa['d']=46;
    mapa['e']=55;
    mapa['f']=64;
    mapa['g']=73;

    auto it=mapa.find('c');

    if(it!=mapa.end()) {
        cout << "Chave encontrado: " << it->second << endl;
    } else {
        cout << "Chave NAO encontrado!" << endl;
    }

	return 0;
}
