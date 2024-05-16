#include <iostream>
#include <vector> //para gerar uma exeção, um erro
#include <stdexcept> //exeções padrões

using namespace std;

int main() {

    vector <int> num(5);

	try {
        num.at(4) = 10;
        cout << num[4] << endl;
	} catch(exception& e) { //e = exeção, erro
        cout << "ERROR: " << e.what() << endl;
	}

	return 0;
}

/*
com o "try catch" vc pd fazer com que caso haja um erro não saia uma mensagem de erro generica e sim personalisada, e outras coisas.


try - onde vamos inserir o código que é passivel de erros, caso haja um erro, é gerado uma exeção e passado para o 'catch':
catch() - é dentro do catch q se realiza o tratamento do erro
*/
