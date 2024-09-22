#include <iostream>
#include <ctime>

using namespace std;

int main() {

	time_t t;
	struct tm * infoTempo;
	char buffer[80];

	time(&t);
	infoTempo = localtime(&t);

	//strftime(buffer,80,"Hora: %I:%M:%S",infoTempo); //horas
	strftime(buffer,80,"Hora: %d:%m:%Y",infoTempo); //data

	cout << buffer << endl;

	return 0;
}
