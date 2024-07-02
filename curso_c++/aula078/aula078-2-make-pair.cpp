#include <iostream>
#include <utility>

using namespace std;

int main() {

	pair <int, int> p1;
	pair <int, char> p2;
	pair <int, string> p3;

	p1 = make_pair(10,5);
	p2 = make_pair(1,'A');
	p3 = make_pair(2,"Hello, World!");

	cout << "Par 1: " << p1.first << " - " << p1.second << endl;
	cout << "Par 2: " << p2.first << " - " << p2.second << endl;
	cout << "Par 3: " << p3.first << " - " << p3.second << endl;

	return 0;
}
