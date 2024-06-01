//For Each usa LAMBDA
#include <iostream>
#include <vector>
#include <algorithm> //para trabalhar com o argoritimo for each

using namespace std;

int main() {

    vector <int> n{0,1,2,3,4,5,6,7,8,9};

    for_each(n.begin(), n.end(), [](int num){
        num+=10; //apenas para somar os valores do vector com 10, não altera os valores originais
        cout << num << endl;
    });

    cout << endl;

    for_each(n.begin(), n.end(), [](int num){ cout << num << endl; }); //os valores não foram alterados definitivamente

	return 0;
}

//for_each(1°parametro, 2°parametro, 3°parametro) :
/*

1°parametro - posição inicial da estrutura q queremos percorrer

2°parametro - o ponto final dessa estrutura

3°parametro - função que fará o tratamento de cada um dos elementos que estão sendo passados para esta função

*/

/**

    //for(auto it = n.begin(); it!= n.end(); it++) {
    for(auto it : n) {
        //cout << *it << endl;
        cout << it << endl;
    }

**/
