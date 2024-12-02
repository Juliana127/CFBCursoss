#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {

    //n�o precisa de convers�o pois dentro de minutos tem segundos
    minutes m1(1);
	seconds s1=m1;
	cout << s1.count() << " seg." << endl;

	cout << "---------------------" << endl;

	//assim que se faz a convers�o
	seconds s2(60);
	minutes m2=duration_cast<minutes>(s2);
	cout << m2.count() << " min." << endl;

	return 0;
}

/*
chrono � um subnamespace, meio que uma evolu��o das bibliotecas time/ctime...

assim como o std, se n�o colocar "using namespace std" voc� tem que colocar std:: antes de todos os membros da biblioteca(cout, end, etc...)
*/

/*
podemos trabalhar com todos esses:

hours
minutes
seconds
milliseconds
microseconds
nanoseconds
*/
