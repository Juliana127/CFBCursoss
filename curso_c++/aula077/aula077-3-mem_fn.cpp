#include <iostream>
#include <functional>

using namespace std;

struct cfb{
    int num;
    int dobro() {
        return num*2;
    }
};

int main() {

	cfb n{10};

	auto dobro2 = mem_fn(&cfb::dobro); //variável que pode ser chamada no lugar da fun

	cout << dobro2(n) << endl;

	return 0;
}
