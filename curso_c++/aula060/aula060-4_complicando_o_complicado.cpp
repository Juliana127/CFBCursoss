#include <iostream>
#include <utility>

using namespace std;

int main() {

    const int tam{3};

	pair <int, pair<string,double>> produto[tam];

	produto[0]=make_pair(1,make_pair("mouse",10.55));
    produto[1]=make_pair(1,make_pair("teclado",50.49));
    produto[2]=make_pair(3,make_pair("monitor",399.98));

    for(int i=0; i < tam; i++) {
        cout << produto[i].first << " - " << produto[i].second.first << " - " << produto[i].second.second << endl;
    }

	return 0;
}
