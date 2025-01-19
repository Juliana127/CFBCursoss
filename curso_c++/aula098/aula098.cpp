#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    //replace_if = substitui valores da coleção que atendem a determinada condição
    cout << "REPLACE_IF" << endl;
    vector<int>vt1{1,4,7,2,5,8,3,6,9,0};
    replace_if(vt1.begin(), vt1.end(), [](int i){return i<5;},10);
    for(auto x:vt1){
        cout << x << "  ";
    }

    cout << "\n\n";

    //fill = preenche uma coleção com um valor especificado
    cout << "FILL" << endl;
    vector<int>vt2(10);
    fill(vt2.begin(),vt2.end(),10);
    for(auto x:vt2) {
        cout << x << "  ";
    }

    cout << "\n\n";

    //remove = remove um valor indicado da coleção
    cout << "REMOVE" << endl;
    vector<int>vt3{2,1,2,3,2,4,2,5,2,6,7,2,8,2,9,2};
    int qtde = count(vt3.begin(), vt3.end(),2);
    remove(vt3.begin(),vt3.end(),2);
    vt3.resize(vt3.size()-qtde);
    vt3.shrink_to_fit();
    for(auto x:vt3) {
        cout << x << "  ";
    }

    cout << "\n\n";

    //unique = remove elementos duplicados consecutivos na coleção
    cout << "UNIQUE" << endl;
    vector<int> vt4 {0,1,2,3,3,3,3,4,5,3,6,7,8,9};
    vector<int>::iterator it;
    it = unique(vt4.begin(), vt4.end());
    vt4.resize(distance(vt4.begin(),it));
    for(auto x:vt4) {
        cout << x << "  ";
    }

    cout << "\n\n";

    //reverse = inverte a ordem dos elementos
    cout << "REVERSE" << endl;
    vector<int> vt5 {0,1,2,3,4,5,6,7,8,9};
    reverse(vt5.begin(),vt5.end());
    for(auto x:vt5) {
        cout << x << "  ";
    }

    cout << "\n\n";

    //sort = ordena os elemento da coleção
    cout << "SORT" << endl;
    vector<int> vt6 {9,0,8,1,7,2,6,3,5,4};
    sort(vt6.begin(), vt6.end());
    for(auto x:vt6) {
        cout << x << "  ";
    }

    cout << "\n\n";

    //is_sorted = verifica se a coleção está ordenada
    cout << "IS_SORTED" << endl;
    vector<int> vt7 {9,0,8,1,7,2,6,3,5,4};
    if(is_sorted(vt7.begin(), vt7.end())) {
        cout << "Ordenada";
    } else {
        cout << "Colecao nao ordenada";
    }

    cout << "\n\n";

    //merge = mescla duas coleções e armazena em um terceiro container
    cout << "MERGE" << endl;
    vector<int> vt8 {0,1,2,3,4};
    vector<int> vt9 {5,6,7,8,9};
    vector<int> vt10(10);
    merge(vt8.begin(),vt8.end(),vt9.begin(),vt9.end(), vt10.begin()); //a terceira coleção tem que ser o begin pq é tudo iterator
    for(auto x:vt10) {
        cout << x << "  ";
    }

    cout << "\n\n";

    //set_union = união de duas coleções
    cout << "SET_UNION" << endl;
    vector<int> vt11 {0,1,2,3,4};
    vector<int> vt12 {5,6,7,8,9};
    vector<int> vt13(10);
    set_union(vt11.begin(),vt11.end(),vt12.begin(),vt12.end(), vt13.begin());
    for(auto x:vt13) {
        cout << x << "  ";
    }

    cout << "\n\n";

    //set_intersection = interseção de duas coleções
    cout << "SET_INTERSECTION" << endl;
    vector<int> vt14{0,1,2,3,4};
    vector<int> vt15{2,3,4,5,6};
    vector<int> vt16(3);
    set_intersection(vt14.begin(),vt14.end(),vt15.begin(),vt15.end(), vt16.begin());
    for(auto x:vt16) {
        cout << x << "  ";
    }

    cout << "\n\n";

    //set_diference = retorna a diferença da primeira coleção em relação a segunda
    cout << "SET_DIFERENCE" << endl;
    vector<int> vt17{0,1,2,3,4};
    vector<int> vt18{2,3,4,5,6};
    vector<int> vt19(7);
    set_union(vt17.begin(),vt17.end(),vt18.begin(),vt18.end(), vt19.begin());
    for(auto x:vt19) {
        cout << x << "  ";
    }

    cout << "\n\n";

    //min e max = retorna os menores e maiores valores
    cout << "MIN e MAX" << endl;
    int n1=10, n2=5;
    cout << "Menor: " << min(n1,n2) << endl;
    cout << "Maior: " << max(n1,n2) << endl;

    cout << "\n\n";

    //minmax = retorna os menores e maiores valores dentre varios
    cout << "MINMAX" << endl;

    int n3=10,n4=5,n5=10,n6=3,n7=8,n8=9;
    auto res=minmax({n3,n4,n5,n6,n7,n8});
    cout << "Menor: " << res.first << " Maior: " << res.second;

    cout << "\n\n";

    //min_element, max_element, minmax_element
    cout << "MIN_ELEMENT, MAX_ELEMENT, MINMAX_ELEMENT" << endl;
    vector<int> vt20 {5,4,10,30,12,15,8,7};
    vector<int>::iterator it1, it2;

    it1=min_element(vt20.begin(), vt20.end());
    it2=max_element(vt20.begin(), vt20.end());
    auto res2=minmax_element(vt20.begin(), vt20.end());

    cout << "Menor: " << *it1 << " Maior: " << *it2 << endl;
    cout << "Menor: " << *res2.first << " Maior: " << *res2.second;

    cout << "\n\n";

	return 0;
}
