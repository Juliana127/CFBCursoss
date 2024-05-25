#include <iostream>
#include <utility>

using namespace std;

int main() {

	const int tam{3};

	pair <int, string> par[tam];

	par[0]=make_pair(10,"Juliana");
    par[1]=make_pair(20,"Tiago");
    par[2]=make_pair(30,"Yzack");

    for(int i=0; i < tam; i++) {
        cout << par[i].first << " - " << par[i].second << endl;
    }

	return 0;
}
