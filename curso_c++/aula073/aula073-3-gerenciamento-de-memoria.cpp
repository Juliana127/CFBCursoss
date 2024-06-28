#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));

	int tam = 10, *vetor;

	//vetor = (int*)calloc(tam, sizeof(int));
	vetor = (int*)malloc(sizeof(int));

	for(int i = 0; i < tam; i++) {
        vetor[i] = rand()%100;
        cout << vetor[i] << endl;
	}

	free(vetor); //sempre chame esse heroi, caso contrario se arrependera amargamente

	return 0;
}

/**
malloc (memory allocation) - aloca memória não inicializada.

--------------------------------------------------------------------------------------------------------------------------
calloc (contiguous allocation) - aloca e inicializa bloco de memória a zero de tamanho especificado.

--------------------------------------------------------------------------------------------------------------------------
realloc (reallocation) - redimensiona um bloco de memória previamente alocado, pode expandir ou reduzir o tamanho do bloco, possivelmente movendo o bloco para um novo local se o tamanho solicitado não puder ser acomodado na localização atual.

--------------------------------------------------------------------------------------------------------------------------
free - libera memória alocada dinamicamente por 'malloc','calloc','realloc'.
sempre depois do código de alocação:

**/
