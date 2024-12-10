#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char * txt1, txt2[]="CFB Cursos", pesquisa='s';

    txt1=(char*)memchr(txt2, pesquisa, strlen(txt2)); //pesquisa: 1° onde quero fazer a pesquisa, 2° o que quero pesquisar, 3° tamanho da pesquisa

    //cout << txt1 << endl; //imprime  apartir do que foi pesquisado
    //cout << txt1-txt2 << endl;

    if(txt1!=NULL) {
        cout << "Letra '" << pesquisa << "' encontrada na posicao: " << txt1-txt2 << endl;
    } else {
        cout << "Letra '" << pesquisa << "' nao encontrada" << endl;
    }

	return 0;
}
