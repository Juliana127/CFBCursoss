#include <iostream>
#include <memory>

using namespace std;

class Carro {
private:
    int velMax;
    void setVelMax(int vm){ this->velMax=vm; }

public:
    int potencia;
    const char* nome;

    int getVelMax() {
        return this->velMax;
    }

    Carro(const char* n, int p):nome(n),potencia(p){
        if(p < 100) {
            this->setVelMax(120);
        }else if(p < 200) {
            this->setVelMax(220);
        }else {
            this->setVelMax(350);
        }
    }
};

int main() {

	unique_ptr <Carro> c1(new Carro{"Zoooom",300});
	cout << c1->nome << " - " << c1->potencia << " - " << c1->getVelMax() << endl;

	Carro c2{"Ventania",400};
    cout << c2.nome << " - " << c2.potencia << " - " << c2.getVelMax() << endl;

	return 0;
}
