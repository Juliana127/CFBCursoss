#include <iostream>
#include <ctime>

using namespace std;

int main() {

	time_t t;
	struct tm * infoTempo; //tm já existe no ctime

	time(&t);
	infoTempo = localtime(&t);

	//cout << t << " s desde 0:00 de 1 de Janeiro de 1970." << endl;
	//cout << asctime(infoTempo) << endl;

	cout << infoTempo->tm_min << endl;

	return 0;
}
