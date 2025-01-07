#include <iostream>
#include <string>

using namespace std;

int main() {

	string txt1("Curso de C++");
	string txt2("CFB Cursos");
    //string txt2("Curso de C++");

	if(txt1.compare(txt2) == 0) {
        cout << "Strings iguais!" << endl;
	} else {
        cout << "strings Diferentes" << endl;
	}

	return 0;
}
