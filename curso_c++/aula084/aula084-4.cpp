#include <iostream>
#include <string>

using namespace std;

int main() {

    string txt("CFB Cursos - Curso de C++");

    cout << txt << endl;

	//txt.clear();

	if(txt.empty()) {
        cout << "String Vazia" << endl;
	} else {
        cout << txt << endl;
	}

	return 0;
}
