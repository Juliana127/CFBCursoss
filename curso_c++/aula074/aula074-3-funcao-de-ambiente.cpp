#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	const char* canal{"CFB Cursos"};

	for(int i = 0; i < 10; i++) { cout << i << endl; }

	//_Exit(0); //c++11, e termina o programa aqui, sem executar os 'systems'

    system("cls");
    system("dir");
    cout << canal << endl;
    system("pause");

	return 0;
}
