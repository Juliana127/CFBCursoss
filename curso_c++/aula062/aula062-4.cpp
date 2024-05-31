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
	//shared_ptr<Carro> c2(new Carro);
	c1->setVel(10);
	c2->setVel(5); //ambos recebem o mesmo valor, e sendo esse o ultimo será valor 5, pois ambos estão usando o mesmo ponteiro a não ser que faça dois ponteiros
	cout << "Velocidade: " << c1->getVel() << endl;
	cout << "Velocidade: " << c2->getVel() << endl;

	return 0;
}
