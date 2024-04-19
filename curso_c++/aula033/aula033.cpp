#include <iostream>

using namespace std;

struct carro {
    string nome, cor;
    int potencia, velocidadeMax;
};

int main() {

//  tipo  nommedaVariável
    carro car1, car2;
    //carro car2;

    //configurando as propriedades da variável car1 do tipo carro
    car1.nome = "Trovao";
    car1.cor = "Azul";
    car1.potencia = 450;
    car1.velocidadeMax = 350;

    car2.nome = "Bernardos";
    car2.cor = "Azul Bebe";
    car2.potencia = 250;
    car2.velocidadeMax = 260;

    cout << "Nome do carro....: " << car1.nome << endl;
    cout << "Cor..............: " << car1.cor << endl;
    cout << "Potencia.........: " << car1.potencia << " cavalos" << endl;
    cout << "Velocidade maxima: " << car1.velocidadeMax << " por hora" << endl << endl;

    cout << "Nome do carro....: " << car2.nome << endl;
    cout << "Cor..............: " << car2.cor << endl;
    cout << "Potencia.........: " << car2.potencia << " cavalos" << endl;
    cout << "Velocidade maxima: " << car2.velocidadeMax << " por hora" << endl;

	return 0;
}

/*
struct = nada mais é do que um tipo que nós criamos, uma coleção de variáveis de propriedades e metodos

dentro de car 1, podemos trabalhar  com as propriedades string nome e cor, e int potencia e velo...
*/
