#include <iostream>
#include <string>

using namespace std;

int main() {

	string txt("CFB Cursos - Curso de C++ - Serie sobre Bibliotecas - www.youtube.com/cfbcursos");

    cout << txt << endl;

    cout << "Antes: " << txt.capacity() << endl;

    txt.resize(25);
    txt.shrink_to_fit(); //reduz a capacidade para o tamanho que a string ocupa agora com o resize, mas tem um limite minimo de 15, se for reduzido para menos que 15 continuara com 15 no minimo

	cout << "Depois: " << txt.capacity() << endl;

	return 0;
}
