#include <iostream>

using namespace std;

int main() {

    int num = 10;

    cout << num << endl;

    //num = num * -1;   //a conta fara com que mude o valor da varivale

    //cout << -num << endl; //sairá um valor negativo (-10) mas é momentaneo, em outra imporessão sairá o valor verdadeiro da variável

    num =- num; //muda o valor definitivamente tbm, mas no lugar do 2° num aqui, pode ser outro numero desde q o - esteja ali

    cout << num << endl;

    return 0;
}

/*
Não se esqueça que se for usar o:
num = num * -1;

então o -num que será imprimido fara a converção do simbolo (para +)
ou seja, se vai usar a forma que mude o valor da variavel definitivamente, não use a outra forma que muda o valor temporariamente
*/
