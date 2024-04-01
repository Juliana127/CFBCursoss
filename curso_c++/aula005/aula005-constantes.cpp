#include <iostream>

using namespace std;

#define pi 3.1415
#define canal cout << "Canal Fessor Bruno" << endl;

int main() {

    cout << "Valor de PI: " << pi << endl;

    canal //pode se chamar quantas vezes quiser, c++ é mt bom vey
    canal
    canal
    canal
    canal
    canal
    canal
    canal
    canal
    canal

    return 0;
}
/*

variaveis = mudam, podem mudar, nao tem um valor fixo.

constantes = seu valor não muda, ele tem constantemente/sempre o mesmo valor.

#define NomeDaConst ValorDaConst

quando na criacao da constante (com define) voce coloca o cout, nao precisa chamar cout dentro de main, mas quando apenas declara o valor (ex. do pi) ai voce deve chamar cout para imprimir e nao dar nenhum erro, e para imprimir sem cout nao precisa de ponto e virgula, mas nao esqueca dele na criacao da constante!

Em algumas pesquisas descobri que alem de #define, existe outro tipo de constante: cont
Esta outra constante é melhor para se usar, mesmo que com ela voce tenha que definir um tipo (float, int, char, etc..) coisa que com #define nao e necessario, mas com o tipo e melhor para o programa e o computador, entenderem exatamente o que e, e n dar erro ao executar, ou seja, e mais seguro.

*/
