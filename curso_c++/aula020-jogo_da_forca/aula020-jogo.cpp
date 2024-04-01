#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	char palavra[30], letra[1], secreta[30];
	int tamanho=0, i=0, chances=5, acertos=0;
	bool acerto=false; //ele procura se ouve mesmo um acerto ou n
	string nome;

	cout << "Nome do jogador da partida: ";
	cin >> nome;

	cout << "Digite uma palavra secreta: ";
	cin >> palavra;

	system("cls");

	while(palavra[i] != '\0') {
        i++;
        tamanho++;
	}

	for(i = 0; i < 30; i++) {
        secreta[i] = '-';
	}

	while( (chances > 0) && (acertos < tamanho) ) {
        cout << "Chances restantes: " << chances << endl << endl;
        cout << "Palavra secreta: ";
        for(i = 0; i < tamanho; i++){
            cout << secreta[i];
        }
        cout << endl <<"Digitie uma letra: ";
        cin >> letra[0];
        for(i = 0; i < tamanho; i++) {
            if(palavra[i]==letra[0]) {
                acerto=true;
                secreta[i]=palavra[i];
                acertos++;
            }
        }
        if(!acerto) {
            chances--;
        }
        acerto=false;
        system("cls");
	}

	if(acertos==tamanho) {
        cout << "Congratulations " << nome << ",you won this match!" << endl;
        cout << "The world was: " << palavra << endl;
	} else {
        cout << "What a shame, you lost this match!" << endl;
	}

	system("pause");

	return 0;
}
