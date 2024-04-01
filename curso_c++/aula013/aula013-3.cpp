//SWITCH ANINHADO
#include <iostream>

using namespace std;

int main() {

	int valor;

	cout << "[1]= Carro [2]= Moto [3]= Aviao [4]= Helicoptero" << endl;
	cout << "Digite um transporte: ";
	cin >> valor;


	switch(valor) {
        case 1:
        case 2:
            cout << "Transporte Terrestre" << endl;

                switch(valor) {

                    case 1:
                        cout << "Carro selecionado" << endl;
                        break;

                    case 2:
                        cout << "Moto selecionada" << endl;
                        break;
                }
            break;

        case 3:
        case 4:
            cout << "Transporte aereo" << endl;
            switch(valor) {
                case 3:
                    cout << "Aviao selecionado" << endl;
                    break;

                case 4:
                    cout << "Helicoptero selecionado" << endl;
                    break;
            }
            break;

        default:
            cout << "esse transporte nao existe" << endl;
	}

	cout << "\n---------------Programa Finalizado---------------\n";

	return 0;
}
