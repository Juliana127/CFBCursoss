#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //setbase = base: decimal, hexadecimal, octal
    cout << setbase(16);//decimal 10, hexa 16, octal 8
    cout << 10 << "\n\n";
    cout << setbase(10);

    //setw = largura do campo
    cout << setw(10);
    cout << "CFB";
    cout << setw(10);
    cout << "Cursos";
    cout << setw(30);
    cout << "Curso de C++" << "\n\n";

    //setfill = preenchimento do campo
    cout << "Canal:" << setw(50) << setfill('.') << "CFB Cursos" << "\n\n";

    //setprecision = precisão dos valores float e double, casas decimais
    double pi=3.14159;
    cout << setprecision(3) << pi << "\n\n";

	return 0;
}
