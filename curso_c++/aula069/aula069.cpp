#include <iostream>
#include <algorithm> //para usar o 'find'

using namespace std;

int main() {

    int vetor[] = {10,20,30,40,50,60,70} ;
    int *p;

    size_t tam = sizeof vetor/4;

    p = find(vetor,vetor+tam,6); //o ultimo n�mero � o q queremos saber se tem ou n�o

    if(p!=vetor+tam) {
        cout << "Numeral encontrado: " << *p << endl;
    } else {
        cout << "Numeral NAO encontrado!" << endl;
    }

	return 0;
}
/**
o 'find' s� exige como parametro o elemento que quero verificar se esta na cole��o
**/
