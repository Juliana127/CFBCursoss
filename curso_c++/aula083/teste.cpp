#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    inicio:
    system("cls");
    system("color 0a");

    char opc;

	char txt[]="CFB Cursos";
	char * c;
	char pesquisa;

	cout << "Digite uma letra para a pesquisa: ";
	cin >> pesquisa;

	c = strchr(txt,pesquisa);

    if(c!=NULL) {
        cout << "\nPosição da letra é: " << c-txt << ".\n\n";
    } else {
        cout << "\nNão achei essa letra na pesquisa.\n\n";
    }

    cout << "Deseja continuar? ";
    cin >> opc;

    if((opc == 'y')||(opc =='Y')) {
        goto inicio;
    }

	return 0;
}
