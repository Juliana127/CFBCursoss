#include <iostream>

using namespace std;

int main() {

	int x, y;

    cout << "loop 1 (AND): " << endl;

	for(x = 0, y = 0; x <= 10 && y <= 6; x++, y+=2) {
        cout << x << " - " << y << endl;
	}

	cout << endl << "loop 2 (OR): " << endl;

	for (x = 0, y = 0; x <= 10 || y <= 6; x++, y+=2) {
        cout << x << " - " << y << endl;
	}

	return 0;
}
