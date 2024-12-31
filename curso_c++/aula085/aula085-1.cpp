#include <iostream>
#include <string>

using namespace std;

int main() {

    string txt("CFB Cursos - Curso de C++ - Serie sobre bibliotecas - www.youtube.com/cfbcursos\n ");

    int tam = txt.size();

    /*
    for(int i = 0; i <= tam; i++) {
        //cout << txt[i]; //elemento por elemento, caso duvidas, coloque um endl no final que entendera
        cout << txt.at(i); //mesma coisa
    }
    */

    cout << txt.at(2);

    cout << endl;

	return 0;
}

/*
at - retorna o elemento na posição indicada
*/
