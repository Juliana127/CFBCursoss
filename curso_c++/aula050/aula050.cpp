#include <iostream>
#include <fstream> //biblioteca para mexer com os arquivos

using namespace std;

int main() {

	ofstream arquivo; //objeto do tipo "ofstream"

    arquivo.open("cfbcursos.txt",ios::app); //criando o arquivo f�sico e fazendo com que n�o apague textos anteriores

    arquivo << "Cfb Cursos\n"; //tipo 'cout', e s� funciona a quebra de linha com '\n'
    arquivo << "Cursos de C++\n";
    arquivo << "cfbcursos.com.br\n"; //se n�o usar o 'ios::app' essas saidas a mais ainda apareceram juntas, pois saem no msm 'open'

    arquivo.close(); //sempre q se abre um arquivo deve-se fecha-lo, ent�o dessa forma libera a mem�ria usada aqui

	return 0;
}

/*
� preciso definir o arquivo dentro do sistema, e h� 3 tripos para isso:

ofstream - saida, sai do sistema/programa e entrando no arquivo.

ifstream - entrada, sai do arquivo e entra no programa.

fstream - pd ser entrada ou sa�da.

---------------------------------------------------------------------------

se voc� mudar o texto que deve aparecer no arquivo, o texto anterior ser� sobre-escrito, ou seja, ser� apagado e outro texto tomara seu lugar, para isso n�o acontecer, usa o ...("...",ios::app);
*/
