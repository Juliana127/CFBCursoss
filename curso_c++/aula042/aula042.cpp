#include <iostream>
#include <vector> //para trabalhar com 'vectores' (uma array mais moderna, vamos dizer assim)

using namespace std;

int main() {

	vector<int> num; //n precisa dar um tamanho, tipo alocação dinamica de memória
	//vector<int> num(5); //mas caso queira dar tamanho
	int tamanho;

	num.push_back(10); //insere um elemento no final de um vector
	num.push_back(2);
	num.push_back(5);
	num.push_back(8);
	//num[4]=3; //não dá erro mas tbm n existe, então nem adianta fazer assim, só se for mesmo uma array, mas se colocar no lugar de [4] um [3] da pra mudar o valor anteriormente dado a essa posição (8)

	tamanho = num.size(); //me retorna o tamanho do vector 'num' e armazena esse tamanho na variável 'tamanho'

	cout << "Tamanho do vector: " << tamanho << "\n\n"; //sai 4

	//for(int i = 0; i < num.size(); i++) //assim tbm da, mas já foi feito a variável 'tamanho' então vamos usar ela
	for(int i = 0; i < tamanho; i++){
            cout << num[i] << endl;
    }

	return 0;
}
