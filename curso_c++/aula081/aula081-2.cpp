#include <iostream>
#include <cctype>

using namespace std;

int main() {

	char str[]=">> CFB-Cursos <<";
	int i=0;

	while(str[i]){
        if(isalpha(str[i])){
            cout << "Caractere " << str[i] << " e alfabetico" << endl;
        }else{
            cout << "Caractere " << str[i] << " NAO e alfabetico" << endl;
        }
        i++;
	}

	return 0;
}
