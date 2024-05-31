#include <iostream>
#include <memory>

using namespace std;

int main() {

    //ponteiro inteligente
	unique_ptr <string> str(new string("CFB Cursos"));

	cout << *str << " -  tamanho: " << str->size() << endl;

	return 0;
}

/* ponteiro tradicional:
    string* str = new string("CFB Cursos");

	cout << *str << " -  tamanho: " << str->size() << endl;

	delete str;
*/
