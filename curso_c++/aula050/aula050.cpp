#include <iostream>
#include <fstream> //biblioteca para mexer com os arquivos

using namespace std;

int main() {

	ofstream arquivo; //objeto do tipo "ofstream"

    arquivo.open("cfbcursos.txt",ios::app); //criando o arquivo físico e fazendo com que não apague textos anteriores

    arquivo << "Cfb Cursos\n"; //tipo 'cout', e só funciona a quebra de linha com '\n'
    arquivo << "Cursos de C++\n";
    arquivo << "cfbcursos.com.br\n"; //se não usar o 'ios::app' essas saidas a mais ainda apareceram juntas, pois saem no msm 'open'

    arquivo.close(); //sempre q se abre um arquivo deve-se fecha-lo, então dessa forma libera a memória usada aqui

	return 0;
}

/*
é preciso definir o arquivo dentro do sistema, e há 3 tripos para isso:

ofstream - saida, sai do sistema/programa e entrando no arquivo.

ifstream - entrada, sai do arquivo e entra no programa.

fstream - pd ser entrada ou saída.

---------------------------------------------------------------------------

se você mudar o texto que deve aparecer no arquivo, o texto anterior será sobre-escrito, ou seja, será apagado e outro texto tomara seu lugar, para isso não acontecer, usa o ...("...",ios::app);
*/
