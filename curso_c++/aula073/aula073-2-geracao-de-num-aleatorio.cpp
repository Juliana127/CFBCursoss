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
o 'rand()' vem do cstdlib/stdlib.h para gerar um número aleatório, sendo '%100' significando que quero um número aleatório de 0 a 100 (lembrando que como 'i' tem que ser menor q 10 só aparecera 10 numeros, e como é de 0 a 100, terá apenas 2 digitos, de almentar '%1000' aparecera 3 digitos não apenas 2)
mas quando vc fizer isso, percebe que sempre que rodar o programa terá os mesmos números, para resolver isso use 'srand' junto com o 'time(NULL)' para gerar numeros diferentes a cada vez que rodar o programa
*/
