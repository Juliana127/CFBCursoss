#include <iostream>
#include "variaveis.h"

using namespace std;

void impNum(); //prot�tipo

int num{10}; //vari�vel global para dar acesso fora do arquivo principal

extern int valor; //vale da mesma forma, msm q aqui sej� o arquivo principal, ainda t� usando uma vari�vel externa, ent�o ainda se coloca o 'extern'

int main(){

    impNum();

    cout << "No arquivo auxiliar: " <<  valor << endl;

    cout << "No arquivo .h: " << tmp << endl;

    return 0;
}
