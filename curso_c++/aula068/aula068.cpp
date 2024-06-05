#include <iostream>

using namespace std;

class Veiculo {
private: //só pd ser acessado dentro da própria classe
    int velMax;
    int potencia;
public: //pd ser usado facilmente
    int rodas;
    const char* nome;
protected: //filho do private, mas em classes q herdam essa classe, o protected permite acesso, diferente do private
    int portas;
    const char* cor;
};

class Carro:public Veiculo {
public:
    Carro() {
        //velMax = 180;
        //potencia = 150;
        rodas = 4;
        nome = "Carro";
        portas = 4;
        cor = "Vermelho";

        //cout << velMax << endl;
        //cout << potencia << endl;
        cout << rodas << endl;
        cout << nome << endl;
        cout << portas << endl;
        cout << cor << endl;
    }
};

class Moto {
public:
    Carro c;

    Moto() {
    //velMax = 180;
    //potencia = 150;
    c.rodas = 2;
    c.nome = "Moto";
    //portas = 0;
    //cor = "preto";

    //cout << velMax << endl;
    //cout << potencia << endl;
    cout << c.rodas << endl;
    cout << c.nome << endl;
    //cout << portas << endl;
    //cout << cor << endl;
    }
};

int main() {

    Carro v1;

    cout << "\n\n";

    Moto v2;

	return 0;
}
