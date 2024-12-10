#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char txt[]="CFB Cursos";
    char * c;
    char pesquisa = 'C';

    c=strchr(txt, pesquisa);

    cout << "Posicao: " << c-txt << endl;

	return 0;
}
