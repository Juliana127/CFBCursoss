#include <iostream>

using namespace std;

int main() {

	int x[10]{0,1,2,3,4,5,6,7,8,9};

	//for(int i=0; i < 10; i++) { cout << x[i] << " " ; }
	//for(int i=0; i < sizeof(x)/4; i++) { cout << x[i] << " " ; }
	for(int i : x) { cout << i << " "; }
	//lembre-se q o 'int i' é pq o tipo dessa variável q percorrerá a coleção deve ser o mesmo da coleção, se for 'char' deve ser 'char i', e assim por diante

	return 0;
}

/*
FOR com base em intervalo / for-range-declaration
esse for mais simplificado pode ser usado em: coleções que podem ser iteradas, ou sejá, vetores, vector, map, list, etc...
(é o loop for-each do w3school)
e esse for-each só serve para percorrer coleções, não funciona com variáveis comuns
*/
