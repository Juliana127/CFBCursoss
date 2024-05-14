#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo {
public:
    int vel;
    int blindagem;
    int rodas;

    void setTipo(int tp);
    void setVelMax(int vm);
    void setArma(bool ar);

    void imprimir();

private:
    int tipo; //1 = moto, 2 = carro, 3 = caminh�o, 4 = tanque
    int velMax;
    bool arma;
};

void Veiculo::imprimir() {
    std::cout << "Tipo veiculo.......: " << tipo << std::endl;
    std::cout << "Velocidade Maxima..: " << velMax << std::endl;
    std::cout << "Quantidade de rodas: " << rodas << std::endl;
    std::cout << "Blindagem..........: " << blindagem << std::endl;
    std::cout << "Armamento..........: " << arma << std::endl;
    std::cout << "------------------------------------------" << std::endl;
}
//---------------------------------------------------------------------------------------------------
    void Veiculo::setTipo(int tp) {
        tipo = tp;
    }
    void Veiculo::setVelMax(int vm) {
        velMax = vm;
    }

    void Veiculo::setArma(bool ar) {
        arma = ar;
    }
//---------------------------------------------------------------------------------------------------
class Moto:public Veiculo { //msm q eu � coloque nd aqui dentro essa classe j� tem td q a classe "veiculo" tem, por isso n dara nenhum erro caso compile
public:
    Moto(); //prot�tipo do m�todo (m�todo construtor � o m�todo q tem o msm nome da classe)
};

Moto::Moto() { //declara��o do m�todo construtor
    vel = 0;
    blindagem = 0;
    rodas = 2;
    setTipo(1);
    setVelMax(120);
    setArma(false);
}
//---------------------------------------------------------------------------------------------------
class Carro:public Veiculo {
public:
    Carro(); //Prot�tipo
};

Carro::Carro() {
    vel = 0;
    blindagem = 0;
    rodas = 4;
    setTipo(2);
    setVelMax(180);
    setArma(true);
}
//---------------------------------------------------------------------------------------------------

class Tanke:public Veiculo {
public:
    Tanke(); //Prot�tipo
};

Tanke::Tanke() {
    vel = 0;
    blindagem = 100;
    rodas = 2;
    setTipo(4);
    setVelMax(150);
    setArma(true);
}
//---------------------------------------------------------------------------------------------------

#endif // CLASSES_H_INCLUDED
