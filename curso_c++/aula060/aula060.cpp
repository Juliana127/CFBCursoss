#include <iostream>
#include <utility> //para o comando 'pair'

using namespace std;

int main() {

	pair <int,string> par(10, "Juliana"); //ou vc coloca aqui os valores

	//par.first=10; //ou vc tem q escrever assim para dar os valores
	//par.second="CFB Cursos";

	cout << par.first << " - " << par.second << endl;

	return 0;
}

/*
O 'pair' é semelhante ao 'vector', com a diferença q o 'pair' guarda dados em pares e o 'vector' unitario
no 'pair' vc n precisa se prender apenas aos tipos primitivos de variáveis(int, char, string, bool, float e double), vc pd usar os tipos feitos em classes e etc
*/
