#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int>st1={9,1,0,2,8,3,7,4,6,5};
    set<int>::iterator it;

    for(auto x:st1) {
        cout << x << " - ";
    }

    cout << endl;

    //------------------------------------------------------------------------------------------------------------

    set<int>st2={50,60,30,80,20,70};

    it = st2.begin();
    st2.insert(it,40);
    it = st2.end();
    st2.insert(it,10);
    it = ++ ++ ++st2.begin();
    st2.insert(it,90);

    for(auto x:st2) {
        cout << x << " - ";
    }

    cout << endl;

    //------------------------------------------------------------------------------------------------------------

    set<int>st3={9,1,0,2,8,3,7,4,6,5};

    it = st3.begin();
    st3.erase(it);
    it = st3.end();
    st3.erase(it);
    it= ++st3.begin();
    st2.erase(it);

    for(auto x:st3) {
        cout << x << " - ";
    }

    cout << endl;

    //------------------------------------------------------------------------------------------------------------

    set<int>st4={9,1,0,2,8,3,7,4,6,5};

    it = st4.begin();
    st4.emplace_hint(st4.begin(),10); //emplace_hint não insere mais vezes o mesmo numero, tanto se já tiver no container quanto quando você coloca

    for(auto x:st4) {
        cout << x << " - ";
    }

    cout << endl;

    //Find - retorna um iterator com o elemento pesquisado--------------------------------------------------------

    set<int>st5={9,1,0,2,8,3,7,4,6,5};

    it = st5.find(7);

    cout << *it << endl << endl;

    //cout conta quantos elementos de um determinado valor existem no container------------------------------------

    set<int>st6={9,1,0,2,8,3,7,4,6,5};

    for(auto x:st6) {
        cout << x << " - ";
    }

    cout << endl;

    if(st6.count(2)!=0) {
        cout << "Esta no container." << endl;
    } else {
        cout << "Nao esta no container." << endl;
    }
    cout << endl;

    //lower_bound e upper_bound - retorna um iterator com o elemento econtrado--------------------------------------

    set<int>st7={9,1,0,2,8,3,7,4,6,5};
    it=st7.lower_bound(2);
    cout << *it << endl;

    cout << endl;

	return 0;
}

/*
nessa biblioteca não se pode duplicar
e se você colocar os valores desordenado ele será ordenado na impressão
*/
