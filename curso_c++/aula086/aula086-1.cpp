#include <iostream>
#include <string>

using namespace std;

int main() {

    string txt1("Curso de C++ - Biblioteca String");
    string txt2;

    size_t encontrado = txt1.find("Bib"); //() -> o que quero encontrar dentro da string, 'size_t' poderia ser int mas size_t mostra claramente quando não encontra o que se deseja(mostrando o valor maximo de size_t)

    if(encontrado != string::npos) {
        cout << "Encontrado na posicao: " << encontrado << endl;
    }else {
        cout << "Nao foi encontrado" << endl;
    }

	return 0;
}

/*
npos - constante estatica que contem o valor maximo possivel do tipo size_t
*/
