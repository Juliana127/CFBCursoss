#include <iostream>
#include <map>

using namespace std;

int main() {

	map<int,string> produtos;

    produtos.insert(pair<int,string>(0,"Mouse"));
    produtos.insert(pair<int,string>(1,"Teclado"));
    produtos.insert(pair<int,string>(2,"Monitor"));
    produtos.insert(pair<int,string>(3,"Caixa de Som"));

    produtos.clear(); //limpa toda a lista

	for(auto it : produtos) {
        cout << it.first << " - " << it.second << endl;
	}

	return 0;
}
