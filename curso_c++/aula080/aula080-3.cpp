#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {

	steady_clock::time_point t1 = steady_clock::now();

	cout << "Imprimindo 90000 estrelas: " << endl;

	for(int i = 0; i < 90000; i++) {
        cout << "*";
	}
	cout << endl;

	steady_clock::time_point t2 = steady_clock::now();

	duration<double> tempo = duration_cast<duration<double>>(t2-t1);

	cout << "Tempo de trabalho: " << tempo.count() << " segundos" << endl;

	return 0;
}
