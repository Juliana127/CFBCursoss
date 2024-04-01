#include <iostream>

using namespace std;

int global1, global2;

int main() {
    int local1, local2;
    int res;

    global1 = 6;
    global2 = 4;
    local1 = 9;
    local2 = 10;

    res = (global1 + global2 + local1 + local2)*2; //pode receber mais números para a conta, sem problemas

    cout << "Soma de todas as variaveis: " << res << endl;

    return 0;
}

/*
res = global1 + global2 - local1 * local2;

res = (global1 + global2) / local1 + local2 * 2;

res = global1 / global2 - local1 * local2;

*/
