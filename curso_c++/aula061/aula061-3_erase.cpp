#include <iostream>
#include <map>

using namespace std;

int main() {

	map<int,string> produtos;

    produtos.insert(pair<int,string>(0,"Mouse"));
    produtos.insert(pair<int,string>(1,"Teclado"));
    produtos.insert(pair<int,string>(2,"Monitor"));
    produtos.insert(pair<int,string>(3,"Caixa de Som"));

    produtos.erase(2); //o valor em () n�o � posi��o, e sim o n�m. da chave, ou seja, se estiver 20 no insert acima aqui deve ser 20 tamb�m

	for(auto it : produtos) {
        cout << it.first << " - " << it.second << endl;
	}

	return 0;
}
