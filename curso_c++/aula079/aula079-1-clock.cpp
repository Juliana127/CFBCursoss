#include <iostream>
#include <ctime> //time.h
#include <cmath> //math.h

using namespace std;

int num_primos(int n) {
    int i,j;
    int freq = n-1;
    for(i = 2; i < n; ++i) {
        for(j = sqrt(i); j > 1; --j) { //sqrt = precisa da biblioteca cmath
            if(i % j == 0){
                --freq;
                break;
            }
        }
    }
    return freq;
}

int main() {

	int primos;
	clock_t t;

	t = clock();

	primos = num_primos(999);
	t = clock() -t;

	cout << "Quantidade de primos: " << primos << endl << "Tempo de CPU: " << (float)t/CLOCKS_PER_SEC << " s." << endl;

	return 0;
}
