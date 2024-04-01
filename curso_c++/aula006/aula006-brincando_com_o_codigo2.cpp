#include <iostream>

using namespace std;

int global1, global2;

int main() {
    int res, res2;

    global1 = 1000;
    global2 = 5;

    res = global1 / global2; //primeiro vc divide
    res2 = global1 % global2; //depois vc pega o resto da mesma

    cout << "Divis: " << res << endl;
    cout << "Resto: " << res2 << endl;

    return 0;
}
