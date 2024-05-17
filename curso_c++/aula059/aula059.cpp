#include <iostream>

using namespace std;

int main() {

	auto maior=[](int n1,int n2)->int{

	    return (n1 > n2)? n1 : n2; //if ternario, o 'return' antes pois o resultado volta para ele

	};

	cout << maior(6,2) << endl;

	return 0;
}

/*
Funções LAMBDA (C++11): função anônima, ou seja, não tem nome

[](){};

[captura de variáveis]
(parâmetros)->tipo_retorno {
    corpo da função
}

ela não precisa ser prototipada
*/

/****************************************************

do que eu entendi é tipo isso(de forma bem porca de tentar explicar):

[int main](int argc, char argv*[])->tipo {...código;}

-> isso significa 'retorna'
****************************************************/
