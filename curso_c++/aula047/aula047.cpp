#include <iostream>
#include "classes.h"

using namespace std;

int main() {

    Moto *v1=new Moto();
    Carro *v2=new Carro();
    Tanke *v3=new Tanke();

    //cout << "A moto tem: " << v1->rodas << " rodas" << endl;

    v1->imprimir();
    v2->imprimir();
    v3->imprimir();

	return 0;
}

/*
Herança = quando uma classe herda propriedades de outra classe, ex: criamos a classe veiculo (uma classe generica para todos os veiculos), e podemos criar alguns veiculos apartir dessa classe (caminhão, avião, moto, carro, etc). E se eu criar uma "moto" que herda a classe "veiculo", todos os elementos da classe "veiculo" vão estar presentes na classe "moto", herança é q eu não preciso declarar todos os elementos na classe q esta herdando (classe filho), a classe que seja herdada é a pai
*/
