#include <iostream>
#include <string>

using namespace std;

int main() {

    string txt("CFB Cursos - Curso de C++");

    string::iterator it;

    it=txt.begin(); //faz ser impresso a primeira letra dentro de 'txt'

    cout << *it << endl;

    it=txt.end()-1; //faz ser impresso a ultima letra (-1 pois sem isso faz a ultima coisa ser o terminador, que n�o imprime nada alem de um espa�o vazio)

    cout << *it << endl;

    return 0;
}

/*
tamb�m temos:
rbegin
rend

reverse_iterator
*/
