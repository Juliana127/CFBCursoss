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
Fun��es LAMBDA (C++11): fun��o an�nima, ou seja, n�o tem nome

[](){};

[captura de vari�veis]
(par�metros)->tipo_retorno {
    corpo da fun��o
}

ela n�o precisa ser prototipada
*/

/****************************************************

do que eu entendi � tipo isso(de forma bem porca de tentar explicar):

[int main](int argc, char argv*[])->tipo {...c�digo;}

-> isso significa 'retorna'
****************************************************/
