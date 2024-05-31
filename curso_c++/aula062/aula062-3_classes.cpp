#include <iostream>
#include <memory>

using namespace std;

class Carro {
public:
    int vel=0;
    int getVel(){
        return vel;
    }
};

int main() {

    //class com ponteiro inteligente
	unique_ptr <Carro> c1(new Carro);
	cout << "Velocidade: " << c1->getVel() << endl;

	return 0;
}

/* Class tradicional:

    Carro *c1 = new Carro();
	cout << "Velocidade: " << c1->getVel() << endl;
	delete c1;

*/
