#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> vct ={2,4,6,7,8,5,1,3,0,9};

	cout << "Tamanho inicia: " << vct.size() << endl << "-----------------------" << endl; //pode ser o max_size tbm

	vct.resize(4);
	cout << "Tamanho mudado: " << vct.size() << endl << "-----------------------" << endl;

	for(auto x:vct) {
        cout << x << endl;
	}

    vct.shrink_to_fit();

	cout << "-----------------------" << endl << "Capacidade: " << vct.capacity() << endl << "-----------------------" << endl;

	if(vct.empty()) {
        cout << "Vector Vazio" << endl;
	} else {
        cout << "Nao esta vazio" << endl;
	}

	return 0;
}
