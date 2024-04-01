#include <iostream>

using namespace std;

int main() {

    int cont = 0;

    while(cont ++< 20) {
        cout << cont << endl;
        if(cont == 10) {
            break; // assim para antes de chegar no numero maximo
        }
    }

	return 0;
}
