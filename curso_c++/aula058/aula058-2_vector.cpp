#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> x{10,20,30,40,50,60,70,80,90,100};

	for(auto i : x) { cout << i << " "; } //lembrando q o 'auto' ajuda ainda mais

	return 0;
}
