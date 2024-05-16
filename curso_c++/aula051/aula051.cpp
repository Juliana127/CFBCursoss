#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ofstream arquivoS; //'S' = sa�da

	arquivoS.open("cfbcursos.txt");

	arquivoS << "CFB Cursos\n";
	arquivoS << "Curso de C++\n";
	arquivoS << "cfbcursos.com.br\n";
	arquivoS << "youtube.com/cfbcursos\n";

	arquivoS.close();

	ifstream arquivoE; //'E' = entrada

	string linha;

	arquivoE.open("cfbcursos.txt");

    if(arquivoE.is_open()) {
        while(getline(arquivoE, linha)) {
            cout << linha << endl;
        }
        arquivoE.close(); //n�o se esque�a disso
    } else {
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }

	return 0;
}

/*
e n�o precisa especificar 'ios::in' ou 'ios::out' pq j� foi criado os dois, 'ofstream' e 'ifstream'
*/
