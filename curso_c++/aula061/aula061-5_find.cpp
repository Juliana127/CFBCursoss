#include <iostream>
#include <map>

using namespace std;

int main() {

	map<int,string> produtos;
	map<int,string>::iterator itmap;

    produtos.insert(pair<int,string>(10,"Mouse"));
    produtos.insert(pair<int,string>(20,"Teclado"));
    produtos.insert(pair<int,string>(30,"Monitor"));
    produtos.insert(pair<int,string>(40,"Caixa de Som"));

    itmap = produtos.find(30);
    if(itmap == produtos.end()) {
        cout << "Produto nao encontrado." << endl;
    } else {
        cout << "Produto em estoque." << endl;
        cout << "Codigo: " << itmap->first << " Produto: " << itmap->second << endl;
    }

	return 0;
}
