#include <iostream>

using namespace std;

int main() {

        int cont = 0;

        while(cont <= 1000) {
            cout << cont << endl;
            cont++;
            if(cont == 500) { //toda interação do programa ele verifica se o 'if' foi satisfeito, até ser satisfeito
                break; //interrompe o loop
            }
            //se quiser que chege a 500 e não pare no 499, coloque o cont++; aqui
        }

	return 0;
}
