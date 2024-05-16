#include <iostream>

using namespace std;

extern int num;

int valor{100};

void impNum() {
    cout << "No aquivo principal: " << num << endl;
}

/*
No projeto só se pode ter 1 main, então como esse arquivo não é o principal do projeto não precisa ter main nele
tbm n pd ter duas variáveis com o mesmo nome no mesmo projeto, então se for uma variável externa do arquivo principal, se colocar 'extern' antes dela
*/
