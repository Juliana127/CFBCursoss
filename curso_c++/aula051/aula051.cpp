#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ofstream arquivoS; //'S' = saída

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
        arquivoE.close(); //não se esqueça disso
    } else {
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }

	return 0;
}

/*
e não precisa especificar 'ios::in' ou 'ios::out' pq já foi criado os dois, 'ofstream' e 'ifstream'
*/
