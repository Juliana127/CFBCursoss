#include <iostream>
#include <vector> //para gerar uma exe��o, um erro
#include <stdexcept> //exe��es padr�es

using namespace std;

int main() {

    vector <int> num(5);

	try {
        num.at(4) = 10;
        cout << num[4] << endl;
	} catch(exception& e) { //e = exe��o, erro
        cout << "ERROR: " << e.what() << endl;
	}

	return 0;
}

/*
com o "try catch" vc pd fazer com que caso haja um erro n�o saia uma mensagem de erro generica e sim personalisada, e outras coisas.


try - onde vamos inserir o c�digo que � passivel de erros, caso haja um erro, � gerado uma exe��o e passado para o 'catch':
catch() - � dentro do catch q se realiza o tratamento do erro
*/
