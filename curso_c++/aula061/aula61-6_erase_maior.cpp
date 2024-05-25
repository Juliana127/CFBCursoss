#include <iostream>
#include <map>

using namespace std;

int main() {

	map<int,string> produtos;
	map<int,string>::iterator itmap;

    produtos.insert(pair<int,string>(1,"Mouse"));
    produtos.insert(pair<int,string>(2,"Teclado"));
    produtos.insert(pair<int,string>(3,"Monitor"));
    produtos.insert(pair<int,string>(4,"teste 1"));
    produtos.insert(pair<int,string>(5,"teste 2"));
    produtos.insert(pair<int,string>(6,"teste 3"));
    produtos.insert(pair<int,string>(7,"teste 4"));
    produtos.insert(pair<int,string>(8,"teste 5"));

    produtos.erase(produtos.begin(), produtos.find(3)); //é excluido do inicio até antes do número de 'find'
    //produtos.erase(produtos.find(1), produtos.find(5)); //para apagar de um núm. até outro que vc quiser

    for(auto it : produtos) {
        cout << it.first << " - " << it.second << endl;
	}

	return 0;
}
