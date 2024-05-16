#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {

	fstream arquivoSE; //objeto unico tanto pra entrada quanto para saida

	system("color 0a");

	char opc='s';
	string nome, linha;

	arquivoSE.open("cfbcursos.txt",ios::out |  ios::app); //modo escrito

	while((opc=='s')or(opc=='S')) {
        cout << "Digite um nome: ";
        cin >> nome;
        arquivoSE << nome << endl;

        cout << "Digitar um novo nome?[s/n] ";
        cin >> opc;
        system("cls");
	}
	arquivoSE.close();

	arquivoSE.open("cfbcursos.txt",ios::in);

	cout << "Nomes digitados: " << endl;

	if(arquivoSE.is_open()) {
        while(getline(arquivoSE, linha)) {
            cout << linha << endl;
        }
        arquivoSE.close();
	} else {
        cout << "Nao foi possivel abrir o arquivo." << endl;
	}

	return 0;
}

/*
Depois de escrever os nomes que quiser no programa, entre no arquivo '.txt' e veja todos os nomes que vc escreveu por ultimo, lá
*/
