#include <iostream>

using namespace std;

class Carro {
private:
    int velMax;
    const char* nome;
public:
    int potencia;

    int getVelMax() { return velMax; }

    const char* getNome() { return nome; }

    Carro() {
        velMax = 120;
        potencia=85;
        nome="Popular";
    }

    //Sobrecarga de métodos
    Carro(int pt, const char* no):potencia(pt), nome(no) {
        if(pt < 100) {
            velMax=120;
        }else if(pt < 200) {
            velMax=240;
        }else {
            velMax = 360;
        }
    }
    //fim da sobrecarga
};

int main() {

	Carro c1;
	cout << c1.getNome() << " - " << c1.potencia << " - " << c1.getVelMax() << endl;

	Carro c2{300, "Esportivo"};
	cout << c2.getNome() << " - " << c2.potencia << " - " << c2.getVelMax() << endl;

	Carro c3{180, "Luxo"};
	cout << c3.getNome() << " - " << c3.potencia << " - " << c3.getVelMax() << endl;

	return 0;
}

/*
Polimorfismo = é a possibilidade de poder criar varios metodos com o mesmo nome e cada um desses métodos vai realizar uma atividade diferente
*/
