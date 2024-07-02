#include <iostream>
#include <functional>

using namespace std;

int soma(int n1, int n2) {
    return n1+n2;
}

int main() {

	auto s1 = bind(soma, 10,5);

	cout << s1() << endl;

	return 0;
}
