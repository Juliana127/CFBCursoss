#include <iostream>

using namespace std;

extern int num;

int valor{100};

void impNum() {
    cout << "No aquivo principal: " << num << endl;
}

/*
No projeto s� se pode ter 1 main, ent�o como esse arquivo n�o � o principal do projeto n�o precisa ter main nele
tbm n pd ter duas vari�veis com o mesmo nome no mesmo projeto, ent�o se for uma vari�vel externa do arquivo principal, se colocar 'extern' antes dela
*/
