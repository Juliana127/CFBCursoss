#include <iostream>

using namespace std;

int main() {

	int x, y, z;

	for(x = 0, y = 1, z = 0; x <= 10, y <= 21; x++, y+=2, z+=3) {
        cout << x << " - " << y << " - " << z << endl;
	}

	return 0;
}

/*
pelo que entendi, se colocar duas condicionais (x e y) as duas vão parar quando uma delas for satisfeita, mesmo que a outra não tenha sido ainda
*/
