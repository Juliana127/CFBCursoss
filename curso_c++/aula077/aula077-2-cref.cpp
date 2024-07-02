#include <iostream>
#include <functional>

using namespace std;

int main() {

	int n1{10};
	auto n2=cref(n1);

	n1++;

	cout << n2 << endl;

	return 0;
}
