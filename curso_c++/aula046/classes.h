#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo {
    public:
        int vel;
        int tipo;

        Veiculo(int tp);

        int getVelMax();

        bool getLigado();

        void setLigado(int l);

    private:

        void setVelMax(int vm); //agr ele n pd ser modificado

        std::string nome;
        int velMax;
        bool ligado;
};

bool Veiculo::getLigado() { //para o bool ligado
    return ligado;
}

void Veiculo::setLigado(int l) { //para o bool ligado
    if(l==1) {
        ligado = true;
    }
    else if(l==0) {
        ligado = false;
    }
}

int Veiculo::getVelMax() { //para obter a velMax
    return velMax;
}

void Veiculo::setVelMax(int vm) { //para poder alterar a propriedade privada velMax
    velMax=vm;
}

Veiculo::Veiculo(int tp) {
    tipo = tp;

    if(tipo == 1) {
        nome = "Carro";
        setVelMax(200); //ou só colocar 'velMax', ambos funcionam pois ambos são da classe
    }
    else if(tipo == 2) {
        nome = "Aviao";
        setVelMax(800);
    }
    else if(tipo == 3) {
        nome = "Navio";
        setVelMax(120);
    }
    setLigado(0); /*'false' tbm funciona*/
}


#endif // CLASSES_H_INCLUDED

/*
quando é 'public' pode mudar a velocidade maxima e o tipo no objeto, mas quando é 'private', só pode ser manipulado pela classe, ou seja, tem q criar metodos para alterar tudo q for privado

o metodo construtor é aquele q é chamado quando eu estancio um objeto dessa classe
*/
