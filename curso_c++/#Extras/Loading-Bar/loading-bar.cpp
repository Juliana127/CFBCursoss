#include <iostream>
#include <windows.h>

using namespace std;

int main() {

	char a = 178;
	int i = 0;

	system("color 0a");

	do{
        cout << "\t Loading " <<  i << endl;
        for(int x = 0; x <= i; x++){
            cout << a;
        }
        Sleep(100);

        i++;

        if(i != 31){
            system("cls");
        }
        }while(i != 31);

        cout << "\n\n";

    system("pause");
	return 0;
}
