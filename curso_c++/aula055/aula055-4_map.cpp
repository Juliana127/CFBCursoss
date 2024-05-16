#include <iostream>
#include <map>

using namespace std;

int main() {

	map <string,string> capitais{{"Parana","Curitiba"}};

	for(map<string,string>::iterator it = capitais.begin(); it !=capitais.end(); it++) {
        cout << it->first << " - " << it->second << endl;
    }

	return 0;
}
