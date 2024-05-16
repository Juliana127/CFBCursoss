#include <iostream>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

int main() {

	Pessoa p1{"Juliana",18}; //a ordem da inicialização deve ser a mesma de como foi criardo (primeiro nome depois idade e etc)
    Pessoa p2{"Tiago",25};

    cout << "Nome da pessoa: " << p1.nome << ", Idade: " << p1.idade << endl;

    cout << "Nome da pessoa: " << p2.nome << ", Idade: " << p2.idade << endl;

	return 0;
}
