#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    string world;

	cin >> world;
	cout << endl << world;

	return 0;
}