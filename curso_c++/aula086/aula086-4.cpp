#include <iostream>
#include <string>

using namespace std;

int main() {

	string txt1("18"), txt2;
	int ano = 2018, res;

	res = ano - stoi(txt1); //stoi - converte string para int
	cout << res + 1 << " e um numeral" << endl;

	txt2 = to_string(res);
	cout << txt2 << " e um texto" << endl;

	return 0;
}

//conversão
/*
stoi - para int
to_string - string
stol - long int
stoll - long long int
stoul - long int sem sinal
stoull - unsignit long long int (sem sinal)
stof - para float
stod - para double
stold - para long double
*/
