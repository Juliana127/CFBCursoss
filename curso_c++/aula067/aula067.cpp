#include <iostream>

using namespace std;

class Veiculo {
private:
    const char* nome;
    const char* cor;
public:
    int velMax;
    int rodas;

    void setNome(const char* no) { nome = no; }
    const char* getNome() { return nome; }

    void setCor( const char* co ) { cor = co; }
    const char* getCor() { return cor; }

    virtual void imp() { //virtual: permite que este m�todo seja sobreescrito em alguma classe q herdar 'Veiculo'
        cout << "Nome.............: " << nome << endl;
        cout << "Cor..............: " << cor << endl;
        cout << "Rodas............: " << rodas << endl;
        cout << "Velocidade Maxima: " << velMax << "\n\n";
    }
};

class Carro:public Veiculo { //heran�a
 public:
    Carro() {
        velMax = 160;
        rodas = 4;
        setNome("Carro");
        setCor("Branco");
    }
};

class Moto:public Veiculo {
public:
    Moto() {
        velMax = 200;
        rodas = 2;
        setNome("Moto");
        setCor("Preto");
    }
};

class Militar:public Veiculo {
public:
    int monicao;
    bool armamento;

    Militar(bool arma, int mo):armamento(arma), monicao(mo) {
        velMax = 150;
        rodas = 6;
        setNome("Tanque");
        setCor("Verde");
        if(arma) {
            monicao = mo;
        }else{
            monicao = 0;
        }
    }
    void imp() override{ //override: qr dizer q esse m�todo esta sobrescrevendo o m�todo da classe base (Veiculo)
        cout << "Nome.............: " << getNome() << endl;
        cout << "Cor..............: " << getCor() << endl;
        cout << "Rodas............: " << rodas << endl;
        cout << "Velocidade Maxima: " << velMax << endl;
        cout << "Armamento........: " << armamento << endl;
        cout << "Monicao..........: " << monicao << "\n\n";
    }
};

int main() {

    Carro v1;
    v1.imp();

    Moto v2;
    v2.imp();

    Militar v3{false, 200};
    v3.imp();

    Militar v4{true,100};
    v4.imp();

    return 0;
}
