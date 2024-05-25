#include <iostream>
#include <map>

using namespace std;

int main() {

	map<int,string> produtos;

	//      int = "string"
	produtos[0]="Mouse";
	produtos[1]="Teclado";
	produtos[2]="Monitor";
	produtos[3]="Caixa de Som";

	//for(auto it = produtos.begin(); it != produtos.end(); it++) { //iterator
	for(auto it : produtos) { //for com base em intervalor
        //cout << it->first << " - " << it->second << endl; //com iterator
        cout << it.first << " - " << it.second << endl; //com iterator e for com base em intervalo
	}

	return 0;
}

/*
assim como o 'pair', 'map' tem dois tipos, um para chave e um para valor, e ambos são associados
naturalmente o 'map' já é um container de elementos (assim como o vector, não precisa especificar o tamanho da array na criação)

EX:

map <char, int> prod;
prod['a']=100;



*/
