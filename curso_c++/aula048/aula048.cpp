#include <iostream>

#include "multiplasclasses.h"

using namespace std;

int main() {

    Base1 *obj1 = new Base1();
    Base2 *obj2 = new Base2();
    CFB *obj3 = new CFB();

    //obj1->impBase1();
    //obj2->impBase2();

    obj3->impBase1(); //isso s� � possivel pq
    obj3->impBase2(); //esta sendo usado heran�a m�ltipla

	return 0;
}
