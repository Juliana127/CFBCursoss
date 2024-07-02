#include <iostream>
#include <functional>

using namespace std;

class CFB {
public:
    int num;
    CFB(int n):num(n) {};
    int dobro() {
        return num*2;
    }
};

int main() {

	CFB n1{10};
	CFB n2{5};

	auto dobro2 = mem_fn(&CFB::dobro);

	cout << dobro2(n1) << endl; //troque entre 'n1' e 'n2' para ver o dobro de cada um

	return 0;
}
