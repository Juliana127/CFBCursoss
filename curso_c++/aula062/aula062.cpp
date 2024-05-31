#include <iostream>
#include <memory> //para trabalhar com os ponteiros inteligentes

using namespace std;

int main() {

    unique_ptr<int> pnum(new int(10)); //unique_ptr = ponteiro unico, não pode fazer mais ponteiros unicos, caso queira use 'shared' (em ambos os ponteiros)
    //shared_ptr<int> pnum2 = pnum; //shared_ptr = ponteiro compartilhado

     cout << *pnum << " - " << &pnum << endl;

	return 0;
}

/*
Os 'smart pointers' são melhores de certa forma, do que os ponteiros normais pois eles já fazem o delete ao final da utilização

Vantagens dos smart pointers:
1. Não precisa lembrar de liberar memória
2. Não precisa usar os comandos 'delete' ou 'free' em todos os objetos que foram declarados
3. Elimina o risco de danipointeres, que é quando um ponteiro aponta para um objeto já deletado

--------------------------------------------------------------------------------------------------------

caso não queira colocar o valor em 'new int(x)' pode fazer como nos ponteiros normais abaixo, colocar separadamente, nesse caso não precisa colocar os parenteses

*/

/** Ponteiro normal:

    int *pnum;
    int num = 10;

    pnum=&num;

    cout << *pnum << " - " << pnum << endl;

    delete pnum;

**/

/** OU:

    int *pnum = new int();

    *pnum = 10;

    cout << *pnum << " - " << pnum << endl;

    delete pnum;

**/
