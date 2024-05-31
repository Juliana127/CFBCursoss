#include <iostream>
#include <memory> //para trabalhar com os ponteiros inteligentes

using namespace std;

int main() {

    unique_ptr<int> pnum(new int(10)); //unique_ptr = ponteiro unico, n�o pode fazer mais ponteiros unicos, caso queira use 'shared' (em ambos os ponteiros)
    //shared_ptr<int> pnum2 = pnum; //shared_ptr = ponteiro compartilhado

     cout << *pnum << " - " << &pnum << endl;

	return 0;
}

/*
Os 'smart pointers' s�o melhores de certa forma, do que os ponteiros normais pois eles j� fazem o delete ao final da utiliza��o

Vantagens dos smart pointers:
1. N�o precisa lembrar de liberar mem�ria
2. N�o precisa usar os comandos 'delete' ou 'free' em todos os objetos que foram declarados
3. Elimina o risco de danipointeres, que � quando um ponteiro aponta para um objeto j� deletado

--------------------------------------------------------------------------------------------------------

caso n�o queira colocar o valor em 'new int(x)' pode fazer como nos ponteiros normais abaixo, colocar separadamente, nesse caso n�o precisa colocar os parenteses

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
