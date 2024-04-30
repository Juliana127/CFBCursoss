#include <iostream>

using namespace std;

class Aviao{
    public: //elementos publicos da minha classe
        int velocidade = 0;
        int velMaxima;
        string tipo;
        void inicializacao(int tp); //prototipado

    private: //elementos privados da minha classe
};

void Aviao::inicializacao(int tp) {
    if(tp==1) {
        this->velMaxima = 800; //para essa classe, a propriedade velMaxima recebe 800
        this->tipo="Jato";
    }
    else if(tp==2) {
        this->velMaxima = 350;
        this->tipo = "Monomotor";
    }
    else if(tp==3) {
        this->velMaxima = 180;
        this->tipo = "Planador";
    }
}

int main() {

	Aviao *av1=new Aviao(); //meu 1° objeto é o av1
    Aviao *av2=new Aviao();
    Aviao *av3=new Aviao();

	av1->inicializacao(1);
	av2->inicializacao(2);
	av3->inicializacao(3);

	cout << av1->velMaxima << endl << av2->velMaxima << endl << av3->velMaxima << endl;

	return 0;
}

/*
um objeto é uma instancia da classe, ou seja, aviao é a classe e av1 é o objeto (para mostrar o valor do objeto(a velociade dele nesse caso)ao invez do '.' aqui usamos a '->' para poder imprimir oq quero)
*/
