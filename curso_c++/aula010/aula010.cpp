#include <iostream>
#include <cstdlib> //para o system("cls") funcionar
//stdlib.h ou cstdlib, ambas tem a defini��o do system

using namespace std;

int main() {

    int nota1, nota2, res;
    char opc; //op��o

    inicio:  //para indicar q essa palavra � um label, se coloca : (dois pontos)

    system("cls"); //comando do DOS, por isso se usa o 'system'

    cout << "Digite o valor da nota 1: ";
    cin >> nota1;

    cout << "Digite o valor da nota 2: ";
    cin >> nota2;

    res = nota1 + nota2;

    if(res >= 60) {
        cout << "\nAluno Aprovado\n"; //60 para cima
    } else if(res >= 40) { //vamos dizer que � o meio termo, pode fazer quantos quiser desse
        cout << "\nAluno de Recuperacao\n"; //menor q 60 at� 40
    } else {
        cout << "\nAluno Reprovado\n"; //menor q 40
    }

    cout << "\nDigitar outras notas?[s/n]: ";
    cin >> opc;

    if(opc == 's' or opc == 'S') { //se o usuario colocar 's' ou 'S' q s�o tecnicamente diferentes, dara o mesmo resultado aqui
        goto inicio;
    } //se o valor digitado for 'n' ou qualquer coisa diferentes de 's' ou 'S', o compilador nem l� essa instru��o

	return 0;
}

/*
DICA: N�O USE EXAGERADAMENTE O COMANDO 'GOTO'!

>= 60   Aprovado
>= 40 e <60 Recupera��o
<40     Reprovado
*/
