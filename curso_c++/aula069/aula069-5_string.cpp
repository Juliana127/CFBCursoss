#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	string texto = "CFB Cursos - aula de c++";
	size_t enc = texto.find("CFB"); //size_t é para armazenar tamanhos

	if(enc!=string::npos) {
        cout << "Palavra encontrada: " << enc << endl;
	} else {
       cout << "Palavra NAO encontrada!";
    }

	return 0;
}
