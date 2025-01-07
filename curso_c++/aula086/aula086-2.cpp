#include <iostream>
#include <string>

using namespace std;

int main() {

	string txt1("Curso de C++ - Biblioteca String");
    string txt2;

    txt2 = txt1.substr(15,10);//1° parametro "a partir daqui quero" 2° parametro "tantos caracteres"

    cout << txt2 << endl;

	return 0;
}
