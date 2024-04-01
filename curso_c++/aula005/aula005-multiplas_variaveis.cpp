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
O uso de variáveis é crucial para qualquer programa, mas quanto mais variáveis mais "poluido" fica o código, principalmente se tiver muitas variáve de mesmo tipo, então a melhor opção é usar uma variavel, com diferentes nomes:

POLUIDO ->
int vida;
int tiro;
int etc;

TBM POLUIDO ->
int vida; int tiro; int etc;

LIMPO ->
int vida, tiro, etc;


*/
