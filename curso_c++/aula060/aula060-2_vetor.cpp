#include <iostream>
#include <utility>

using namespace std;

int main() {

	const int tam{3};

	pair <int, string> par[tam];

	par[0].first=100;
	par[0].second="CFB Cursos";

	par[1].first=300;
	par[1].second="Juliana";

	par[2].first=300;
	par[2].second="Robotica";

	cout << par[0].first << " - " << par[0].second << endl;
	cout << par[1].first << " - " << par[1].second << endl;
	cout << par[2].first << " - " << par[2].second << endl;

	return 0;
}
