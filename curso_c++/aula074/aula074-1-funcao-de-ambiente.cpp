#include <iostream>
#include <cstdlib>

using namespace std;

void fim() {
    cout << "CFB Cursos." << endl;
}

int main() {

    atexit(fim);

    for(int i = 0; i < 10; i++) {
        if(i < 5) {
            cout << i << endl;
        } else {
            exit(0);
            cout << i << endl;
        }
    }

	return 0;
}

//N�O TERMINADO!!

/*
abort(); - termina o programa imediatamente sem realizar qualquer limpeza e sem chamar manipuladores de finaliza��o registrados.
EX:
... (dentro do int main)
    cout << "Iniciando o programa..." << endl;
    abort();
    cout << "Este c�digo nunca ser� executado." << endl;

--------------------------------------------------------------------------------------------------------------------------------
exit(); - termina o programa realizando a limpeza.
EX:
...
'exit(0);' OU 'exit(EXIT_SUCCESS);' para "sa�da bem sucedida"
'exit(1);' OU 'exit(EXIT_FAILURE);' para "sa�da falha"

--------------------------------------------------------------------------------------------------------------------------------
atexit(); - registra uma fun��o para ser chamada na finaliza��o.
EX:
    void cleanup() { cout << "Limpando recursos..." << endl; }
    int main() {
        atexit(cleanup);
        ...
        exit(0); //chama cleanup antes de sair
    }
--------------------------------------------------------------------------------------------------------------------------------
quick_exit(); - termina o programa repidamente, chamando apenas os manipuladores registrados como o 'at_quick_exit()', sem realizar limpeza completa. (c++11)
EX:
    void quickCleanup() { cout << "Limpando recursos rapidamente..." << endl; }
    int main() {
        cout << "Iniciando o programa..." << endl;
        at_quick_exit(quickCleanup);
        quick_exit(0);
    }

--------------------------------------------------------------------------------------------------------------------------------
at_quick_exit(); - registra uma fun��o que ser� chamada durante a finaliza��o r�pida via 'quick_exit'. (c++11)
EX:
void quickCleanup() { cout << "Limpando recursos rapidamente..." << endl; }
    int main() {
        cout << "Iniciando o programa..." << endl;
        at_quick_exit(quickCleanup);
        quick_exit(0);
    }

--------------------------------------------------------------------------------------------------------------------------------
*/
