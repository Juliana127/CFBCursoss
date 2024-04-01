#include <iostream>

using namespace std;

int main() {

	for(int tempo=0; tempo < 100000000; tempo++); //se comentar esse for, o tempo de execução do programa diminui, pois ele é executado antes do proximo, obvio

    for(int x = 0; x < 10; x++) {
            cout << x << endl;
    }

    cout << "Rotina finalizada" << endl;

	return 0;
}
