#include <iostream>

using namespace std;

struct carro {
    string nome, cor;
    int potencia, velocidadeMax;
    int vel;

    void insere(string stnome, string stcor, int stpotencia, int stvelocidadeMax) {
        nome = stnome;
        cor = stcor;
        potencia = stpotencia;
        velocidadeMax = stvelocidadeMax;
        vel = 0;
    }

    void mostra() {
        cout << "Nome.............: " << nome << endl;
        cout << "Cor..............: " << cor << endl;
        cout << "Potencia.........: " << potencia << endl;
        cout << "Velocidade Atual.: " << vel << endl;
        cout << "Velocidade Maxima: " << velocidadeMax << "\n\n";
    }

    void mudaVelocidade(int mv) {
        vel=mv;
        if(vel > velocidadeMax) {
            vel = velocidadeMax;
        }
        if(vel < 0) {
            vel=0;
        }
    }
};

int main() {

    carro *carros=new carro[5]; //carros é um ponteiro, e é assim que se faz um array em struct, usando ponteiro

	carro car1, car2, car3, car4, car5;

	//assim também pode:
	//carros[0] = car1; carros[1] = car2; carros[2] = car3; carros[3] = car4; carros[4] = car5;

	carros[0] = car1;
	carros[1] = car2;
	carros[2] = car3;
	carros[3] = car4;
	carros[4] = car5;


	carros[0].insere("Tornado", "Vermelho", 450, 350);
	carros[1].insere("Luxo", "Preto", 250, 260);
	carros[2].insere("Familia", "Prata", 150, 180);
	carros[3].insere("Trabalho", "Branco", 80, 120);
	carros[4].insere("Padrao", "Cinza", 100, 150);

	for(int i = 0; i < 5; i++) {
        carros[i].mostra(); //facilita na hora de imprimir tudo
	}

	return 0;
}
