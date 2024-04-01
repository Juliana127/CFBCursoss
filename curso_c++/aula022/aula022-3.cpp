#include <iostream>

using namespace std;

void soma(int n1, int n2);

int main() {
//      n1 / n2
	soma(15,5);

	return 0;
}

//    parametro1 /parametro2
void soma(int n1, int n2) {
    cout << "Soma dos valores: " << n1 + n2 << endl;
}
