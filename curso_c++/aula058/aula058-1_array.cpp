#include <iostream>

using namespace std;

int main() {

	int x[10]{0,1,2,3,4,5,6,7,8,9};

	//for(int i=0; i < 10; i++) { cout << x[i] << " " ; }
	//for(int i=0; i < sizeof(x)/4; i++) { cout << x[i] << " " ; }
	for(int i : x) { cout << i << " "; }
	//lembre-se q o 'int i' � pq o tipo dessa vari�vel q percorrer� a cole��o deve ser o mesmo da cole��o, se for 'char' deve ser 'char i', e assim por diante

	return 0;
}

/*
FOR com base em intervalo / for-range-declaration
esse for mais simplificado pode ser usado em: cole��es que podem ser iteradas, ou sej�, vetores, vector, map, list, etc...
(� o loop for-each do w3school)
e esse for-each s� serve para percorrer cole��es, n�o funciona com vari�veis comuns
*/
