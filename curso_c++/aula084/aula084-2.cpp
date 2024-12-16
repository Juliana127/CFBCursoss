#include <iostream>
#include <string>

using namespace std;

int main() {

    string txt("CFB Cursos - Curso de C++");

    string::reverse_iterator it;

    it=txt.rend()-1; //se tirar o -1 daqui aparece uma nota musical
    it=txt.rbegin();

    cout << *it << endl;

    return 0;
}
