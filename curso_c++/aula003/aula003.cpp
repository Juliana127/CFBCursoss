#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    system("pause");
    return 0;
}
// de acordo com Padr�o ANSI
/*

#include - para inclus�o de bibliotecas

<iostream> - biblioteca padr�o inicial

using namespace std; - � usado para que n�o se repita o std em todos os comandos padr�es da linguage (assim como deixei com cout e endl)

pode ser feito a funs�o 'void' que � = nulo (no lugar de int main())

system("pause"); - faz o programa parar no cmd quando executado fora do code::blocks ou do terminal do VSCode

al�m do 'endl' tamb�m pode se usar o '\n' para quebra de linha (mas o \n � usado dentro das aspas duplas "")
*/
