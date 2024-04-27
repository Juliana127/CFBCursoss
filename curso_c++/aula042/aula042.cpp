#include <iostream>
#include <vector> //para trabalhar com 'vectores' (uma array mais moderna, vamos dizer assim)

using namespace std;

int main() {

	vector<int> num; //n precisa dar um tamanho, tipo aloca��o dinamica de mem�ria
	//vector<int> num(5); //mas caso queira dar tamanho
	int tamanho;

	num.push_back(10); //insere um elemento no final de um vector
	num.push_back(2);
	num.push_back(5);
	num.push_back(8);
	//num[4]=3; //n�o d� erro mas tbm n existe, ent�o nem adianta fazer assim, s� se for mesmo uma array, mas se colocar no lugar de [4] um [3] da pra mudar o valor anteriormente dado a essa posi��o (8)

	tamanho = num.size(); //me retorna o tamanho do vector 'num' e armazena esse tamanho na vari�vel 'tamanho'

	cout << "Tamanho do vector: " << tamanho << "\n\n"; //sai 4

	//for(int i = 0; i < num.size(); i++) //assim tbm da, mas j� foi feito a vari�vel 'tamanho' ent�o vamos usar ela
	for(int i = 0; i < tamanho; i++){
            cout << num[i] << endl;
    }

	return 0;
}
