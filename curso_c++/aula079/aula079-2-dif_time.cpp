#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int num_primos(int n) {
    int i,j;
    int freq = n-1;
    for(i = 2; i < n; ++i) {
        for(j = sqrt(i); j > 1; --j) {
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
	clock_t t1,t2,t3;
	t1 = clock();

	primos = num_primos(9000);
	t2 = clock();
	t3 = difftime(t2,t1);

	cout << "Quantidade de primos: " << primos << endl << "Tempo de CPU: " << (float)t3/CLOCKS_PER_SEC << " s." << endl;

	return 0;
}
