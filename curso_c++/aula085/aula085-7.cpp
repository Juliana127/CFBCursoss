#include <iostream>
#include <string>

using namespace std;

int main() {

    string txt1("Curso");
    string txt2("Aula");

    txt1.swap(txt2); //troca de ordens dos valores

	cout << txt1 << endl;
	cout << txt2 << endl;

	return 0;
}
