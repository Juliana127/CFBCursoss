#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

//colocar classes em arquivo .h para facilitar caso vá usar essa estrutura em mais de um arquivo

class Aviao {
public:
    int vel = 0;
    int velMax;
    std::string tipo;

    Aviao(int tp); //como ele é o construtor n precisa colocar void ou tals

    void imprimir();
};

Aviao::Aviao(int tp) {
    if(tp == 1) {
        tipo = "Jato"; //tbm n precisa do 'this' pq ta no construtor
        velMax = 800;
    }
    else if(tp == 2) {
        tipo = "Monomotor";
        velMax = 350;
    }
    else if(tp == 3) {
        tipo = "Planador";
        velMax = 180;
    }
}

void Aviao::imprimir() {
    std::cout << "Tipo.............: " << tipo << std::endl;
    std::cout << "Velocidade maxima: " << velMax << std::endl;
    std::cout << "Velocidade.......: " << vel << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
}

#endif // AVIAO_H_INCLUDED
