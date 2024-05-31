#include <iostream>
#include <memory>

using namespace std;

class Carro {
public:
    int vel=0;
    int getVel(){
        return vel;
    }
    void setVel(int v){
    this->vel = v;
}
};

int main() {

	shared_ptr <Carro> c1(new Carro);
	shared_ptr <Carro> c2 = c1;
	c1->setVel(10);
	c2->setVel(5);
	cout << "Velocidade: " << c1->getVel() << endl;
	cout << "Velocidade: " << c2->getVel() << endl;

	return 0;
}
