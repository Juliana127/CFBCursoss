#include <iostream>
#include <cstdlib>
#include <ctime> //apenas para poder usar o time

using namespace std;

int main() {

    srand(time(NULL));
	for(int i = 0; i < 10; i++) {
        cout << rand()%100 << endl;
	}

	return 0;
}

/*
o 'rand()' vem do cstdlib/stdlib.h para gerar um n�mero aleat�rio, sendo '%100' significando que quero um n�mero aleat�rio de 0 a 100 (lembrando que como 'i' tem que ser menor q 10 s� aparecera 10 numeros, e como � de 0 a 100, ter� apenas 2 digitos, de almentar '%1000' aparecera 3 digitos n�o apenas 2)
mas quando vc fizer isso, percebe que sempre que rodar o programa ter� os mesmos n�meros, para resolver isso use 'srand' junto com o 'time(NULL)' para gerar numeros diferentes a cada vez que rodar o programa
*/
