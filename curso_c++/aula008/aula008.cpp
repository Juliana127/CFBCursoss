#include <iostream>

using namespace std;

int main() {

    int num = 10;

    cout << num << endl;

    //num = num * -1;   //a conta fara com que mude o valor da varivale

    //cout << -num << endl; //sair� um valor negativo (-10) mas � momentaneo, em outra imporess�o sair� o valor verdadeiro da vari�vel

    num =- num; //muda o valor definitivamente tbm, mas no lugar do 2� num aqui, pode ser outro numero desde q o - esteja ali

    cout << num << endl;

    return 0;
}

/*
N�o se esque�a que se for usar o:
num = num * -1;

ent�o o -num que ser� imprimido fara a conver��o do simbolo (para +)
ou seja, se vai usar a forma que mude o valor da variavel definitivamente, n�o use a outra forma que muda o valor temporariamente
*/
