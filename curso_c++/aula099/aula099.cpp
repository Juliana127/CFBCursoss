#include <iostream>
#include <cmath> //math.h

#define PI 3.14159265

using namespace std;

double radToGra(int a) {
    #define PI 3.14159265
    return a*PI/180;
}

int main() {

    //Sin, Cos, Tan = seno, cosseno e tangente
    int ang = 45;
    cout << "Trigonometria" << endl;
    cout << "Cosseno de " << ang << ".: " << cos(ang*PI/180) << endl;
    cout << "Seno de " << ang << "....: " << sin(ang*PI/180) << endl;
    cout << "Tangente de " << ang << ": " << tan(ang*PI/180) << endl;

    cout << endl;

    //asin, acos, atan = arco seno, arco cosseno, arco tangente
    cout << "Arcos" << endl;
    cout << "Arco Cosseno de " << ang << ".: " << acos(radToGra(ang)) << endl;
    cout << "Arco Seno de " << ang << "....: " << asin(radToGra(ang)) << endl;
    cout << "Arco Tangente de " << ang << ": " << atan(radToGra(ang)) << endl;

    cout << endl;

    //atan2 = calcula o arco tantegente usando dois parametros representantes de x e y
    double x = 10.0;
    double y = 10.0;
    cout << "Arco tangente de x=-10 e y=10: " << atan2(x,y)*180/PI << endl;

    cout << endl;

    //exp = função exponencial
    double x2=10;
    cout << "Exponencial" << endl;
    cout << "O valor exponencial de " << x2 << ": " << exp(x2) << endl;

    cout << endl;

    //log = retorna o logaritimo natural de um número
    double x3=10;
    cout << "logaritimo" << endl;
    cout << "Logaritimo natural de " << x3 << ": " << log(x3) << endl;

    cout << endl;

    //pow = calcula a potencia de um número base elevado a um expoente
    double x4=10;
    cout << "Potencia" << endl;
    cout << "10 elevado a 2: " << pow(x4,2) << endl;

    cout << endl;

    //sqrt = calcula a raiz quadrada um número.
    double x5=9;
    cout << "Raiz Quadrada" << endl;
    cout << "Raiz quadrada de 9: " <<  sqrt(x5) << endl;

    cout << endl;

    //cbrt (c++11) = calcula a raiz cubica de um numero
    double x6=27;
    cout << "Raiz Cubica" << endl;
    cout << "Raiz cubica de 27: " << cbrt(x6) << endl;

    cout << endl;

    //hypot (c++11) = retorna a hipotenusa (lado maior de um triangulo retangulo)
    double cat1=3, cat2=4;
    cout << "Hipotenusa" << endl;
    cout << "Catetos: " << cat1 << ", " << cat2 << ", Hipotenusa: " << hypot(cat1,cat2) << endl;
    //o quadrado da hipotenusa é igual a soma dos quadrados dos catetos
    cout << "Catetos: " << cat1 << ", " << cat2 << ", Hipotenusa: " << sqrt(pow(cat2,2)+pow(cat1,2)) << endl;

    cout << endl;

    //ceil = arredonda para cima retornando o numeral inteiro mais próximo
    double a=2.2,b=3.8,c=2.7,d=1.2;
    cout << "Arredondamentos" << endl;
    cout << a << " = " << ceil(a) << endl << b << " = " << ceil(b) << endl << c << " = " << ceil(c) << endl << d << " = " << ceil(d) << endl;

    cout << endl;

    //floor = arredonda para baixo retornando o numeral inteiro mais proximo
    cout << a << " = " << floor(a) << endl << b << " = " << floor(b) << endl << c << " = " << floor(c) << endl << d << " = " << floor(d) << endl;

    cout << endl;

    //fmod = retorna o resto da divisão (float)
    double e=5.7, f=2;
    cout << "Resto da divisao" << endl;
    cout << fmod(e,f) << endl;

    cout << endl;

    //round = arredonda para baixo ou para cima, conforme a regra padrão
    double g=5.6, h=5.4;
    cout << "Arredondamentos" << endl;
    cout << round(g) << endl << round(h) << endl;
    cout << rint(g) << endl << rint(h) << endl;

    cout << endl;

    //fdim (c++11) = retorna a diferença (positiva) entre dois numeros
    double i=15,j=9;
    cout << "Diferenca positiva" << endl;
    cout << fdim(i,j) << endl;

    cout << endl;

    //fmax (c++11) = retorna o maior valor entre dois
    //fmin (c++11) = retorna o menor valor entre dois
    cout << "Maior / Menor valor entre 2" << endl;
    double k=15, l=9;
    cout << fmax(k,l) << endl << fmin(k,l) << endl;

    cout << endl;

    //abs ou fabs = arredonda o valor absoluto de numerais
    double m=-15,n=-9;
    cout << "Valor absoluto" << endl;
    cout << fabs(m) << endl << fabs(n) << endl;

	return 0;
}
