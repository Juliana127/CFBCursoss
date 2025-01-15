#include <iostream>
#include <map>

using namespace std;

int main() {

    /*
	map<int,string>mp;
	map<int,string>::iterator it;

	mp[0]="Branco";
	mp[1]="Preto";
	mp[2]="Vermelho";
	mp[3]="Verde";
	mp[4]="Azul";

	for(auto x:mp){
        cout << x.first << " - " << x.second << endl;
	}

	cout << endl;

	for(it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " - " << it->second << endl;
	}
	cout << endl;
	*/

	//capacidade------------------------------------------------------------------------------------------
/*
	map<char,int>mp2;

	mp2['a']=10;
	mp2['b']=20;
	mp2['c']=30;
	mp2['d']=40;
	mp2['e']=50;

	cout << mp2.size() << endl;
	cout << mp2.max_size() << endl;
	cout << endl;
*/
    //acesso aos elementos---------------------------------------------------------------------------------
    /*
    map<char,int>mp3;

    mp3['a']=10;
	mp3['b']=20;
	mp3['c']=30;
	mp3['d']=40;
	mp3['e']=50;

	cout << mp3['a'] << " - " << mp3['b'] << endl;
	cout << mp3.at('a') << " - " << mp3.at('b') << endl;
	cout << endl;
	*/
	//modificadores------------------------------------------------------------------------------------------
/*
	map<int,string>mp4;
	map<int,string>mp5;
	map<int,string>::iterator it;

	mp4.insert(pair<int,string>(10,"Laranja"));
	mp4.insert(pair<int,string>(20,"Abacaxi"));
	mp4.insert(pair<int,string>(30,"Uva"));
	mp4.insert(pair<int,string>(40,"Morango"));
	mp4.insert(pair<int,string>(50,"Banana"));

	it=mp4.find(30);
	mp4.erase(it);

	for(auto x:mp4) {
        cout << x.first << " - " << x.second << endl;
 	}
 	cout << endl;

 	mp4.swap(mp5);
 	mp5.emplace_hint(mp5.end(),60,"Manga");

 	for(auto x:mp5) {
        cout << x.first << " - " << x.second << endl;
 	}

 	cout << endl;

 	if(mp4.empty()) {
        cout << "Map 4 esta vazio" << endl;
 	} else {
        cout << "Map 4 contem valores" << endl;
 	}

 	mp5.clear();

 	if(mp5.empty()) {
        cout << "Map 5 esta vazio" << endl;
 	} else {
        cout << "Map 5 contem valores" << endl;
 	}

 	cout << endl;
 */
 	//operações-----------------------------------------------------------------------------------------------

 	map<int,char>mp6;
 	map<int,char>::iterator it;

 	mp6[0]='a';
 	mp6[1]='b';
 	mp6[2]='c';
 	mp6[3]='d';
 	mp6[4]='e';

 	it=mp6.find(2);
 	cout << it->first << " - " << it->second << endl;

 	if(mp6.count(3)!=0) {
        cout << "A chave 3 esta no map" << endl;
 	}

 	it=mp6.lower_bound(3);
 	mp6.erase(it);

 	for(auto x:mp6) {
        cout << x.first << " - " << x.second << endl;
 	}

	return 0;
}
