#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {

    //não precisa de conversão pois dentro de minutos tem segundos
    minutes m1(1);
	seconds s1=m1;
	cout << s1.count() << " seg." << endl;

	cout << "---------------------" << endl;

	//assim que se faz a conversão
	seconds s2(60);
	minutes m2=duration_cast<minutes>(s2);
	cout << m2.count() << " min." << endl;

	return 0;
}

/*
chrono é um subnamespace, meio que uma evolução das bibliotecas time/ctime...

assim como o std, se não colocar "using namespace std" você tem que colocar std:: antes de todos os membros da biblioteca(cout, end, etc...)
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
