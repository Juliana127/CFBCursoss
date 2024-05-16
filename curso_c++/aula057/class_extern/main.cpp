#include <iostream>
#include "variaveis.h"

using namespace std;

void impNum(); //protótipo

int num{10}; //variável global para dar acesso fora do arquivo principal

extern int valor; //vale da mesma forma, msm q aqui sejá o arquivo principal, ainda tá usando uma variável externa, então ainda se coloca o 'extern'

int main(){

    impNum();

    cout << "No arquivo auxiliar: " <<  valor << endl;

    cout << "No arquivo .h: " << tmp << endl;

    return 0;
}
