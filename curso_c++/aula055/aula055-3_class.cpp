#include <iostream>

using namespace std;

class Veiculo {
public:
    int tipo;
    string nome;
};

int main() {

	Veiculo v1{1,"Minato"}; //dessa forma n�o precisa fazer um construtor, o programa j� se liga q oq esta aqui �: 1 = tipo, MInato = nome

	cout << "Tipo do veiculo: " << v1.tipo << endl << "Nome do veiculo: " << v1.nome << endl;

	return 0;
}
