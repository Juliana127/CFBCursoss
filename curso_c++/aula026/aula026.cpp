//resolvendo o desafio da aula 25
#include <iostream>

using namespace std;

int fatorial(int n);
int fibonacci(int n);

int main() {

	int val, res;

	val=8; //número inicial do fatorial
	res = fatorial(val); //se lê: quero o fatorial de (8)

	cout << "Fatorial de " << val << ": " << res << endl; //depois q a var 'val' for calculada na função 'fatorial' ai sim é imprimida aqui

	cout << "Fibonacci com " << val << " valores: ";
	for(int i = 0; i < val; i++) {
        cout << fibonacci(i+1) << " ";
	}

	cout << endl; //só pra n grudar com o fim do programa

	return 0;
}

int fatorial(int n) { //5! = 5*4*3*2*1
    if(n == 0) {
        return 1; //só quando retorno ser 0 (de 8(val) chegar a 0)
    }
    return n*fatorial(n-1); //com o valor de 'val' esse processo cmc, e fica se chamando até chegar em 0 e retornar 1 para a função
}

int fibonacci(int n) { //1,1,2,3,5,8,13,21...
    if(n == 1 || n ==2) {
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

/*

Fatorial:
0! = 1
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
6! = 720
7! = 5.040
8! = 40.320
9! = 362.880
...

Fibonacci:
1 + 1 = 2
1 + 2 = 3
2 + 3 = 5
3 + 5 = 8
5 + 8 = 13
8 + 13 = 21
13 + 21 = 34
21 + 34 = 55
34 + 55 = 89
...


*/
