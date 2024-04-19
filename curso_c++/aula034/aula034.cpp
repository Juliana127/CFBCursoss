#include <iostream>

using namespace std;

struct carro {
    string nome, cor;
    int potencia, velocidadeMax;
    int vel;

    //isso diminui o main, e ajuda muito se você for fazer muitos (nesse caso) carros
    void insere(string stnome, string stcor, int stpotencia, int stvelocidadeMax) { //st = struct
        nome = stnome;
        cor = stcor;
        potencia = stpotencia;
        velocidadeMax = stvelocidadeMax;
        vel = 0;
    }

    //para simplesmente mostrar o que foi inserido
    void mostra() {
        cout << "Nome.............: " << nome << endl;
        cout << "Cor..............: " << cor << endl;
        cout << "Potencia.........: " << potencia << endl;
        cout << "Velocidade Atual.: " << vel << endl;
        cout << "Velocidade Maxima: " << velocidadeMax << "\n\n";
    }

    void mudaVelocidade(int mv) { //mv = mudavelocidade
        vel=mv;
        if(vel > velocidadeMax) { //não pode ser maior q a velocidade maxima
            vel = velocidadeMax;
        }
        if(vel < 0) { //não pode ser menor que a velocidade minima
            vel=0;
        }
    }
};

int main() {

    carro car1, car2, car3;

    car1.insere("Trovao","Azul", 450, 350);
    //car2.insere("Zuuum","Amarelo", 550, 450);
    //car3.insere("Minato","Vermelho", 450, 350);

    //car1.mostra();
    car1.mudaVelocidade(400); //vai aparecer a velocidade maxima(350)
    car1.mostra();
    //car2.mostra();
    //car3.mostra();

	return 0;
}
