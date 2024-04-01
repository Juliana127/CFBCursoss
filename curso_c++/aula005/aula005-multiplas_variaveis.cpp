#include <iostream>

using namespace std;

int main() {

    int vidas=3, tiros=500, etc=100; //multiplas variaveis
    //vidas = 3;
    //tiros = 500;
    //etc = 100;

    cout << "Numero de Vidas: " << vidas << ", voce pode dar " << tiros << " tiros, e sla mais o que " << etc << "." << endl;


    return 0;
}

/*
O uso de vari�veis � crucial para qualquer programa, mas quanto mais vari�veis mais "poluido" fica o c�digo, principalmente se tiver muitas vari�ve de mesmo tipo, ent�o a melhor op��o � usar uma variavel, com diferentes nomes:

POLUIDO ->
int vida;
int tiro;
int etc;

TBM POLUIDO ->
int vida; int tiro; int etc;

LIMPO ->
int vida, tiro, etc;


*/
