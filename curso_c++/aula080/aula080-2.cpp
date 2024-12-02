#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {

    //Se não colocar o using aqui, não conseguiremos mecher com as informações do relogio do sistema
	using chrono::system_clock;

	//precisa de 2 tipos, o primeiro precisa ser um tipo aritimetico(int) e o ration que é um periodo
	//60 segundos x 60 minutos x um dia
	duration<int, ratio<60*60*24>> um_dia(1);

	system_clock::time_point hoje = system_clock::now();

	system_clock::time_point amanha = hoje + um_dia;

	system_clock::time_point ontem =hoje - um_dia;

	time_t tt;

	tt = system_clock::to_time_t(hoje);
	cout << "Hoje: " << ctime(&tt) << endl;

	tt = system_clock::to_time_t(amanha);
	cout << "Amanha: " << ctime(&tt) << endl;

	tt = system_clock::to_time_t(ontem);
	cout << "Ontem: " << ctime(&tt) << endl;

	return 0;
}
