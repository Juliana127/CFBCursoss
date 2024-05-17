#include <iostream>
#include <vector>

using namespace std;

int main() {

	int x1{10},x2{5},x3{2},x4{12};

	//caso tenha mts variáveis, ao invez de colocar uma por uma no '[]' simplesmente coloque '[=]' e tds as variáveis do escopo seram capturadas
	//auto soma=[x1,x2,x3,x4]()->int { return x1+x2+x3+x4; };
	auto soma=[=]()->int { return x1+x2+x3+x4; };

	auto maior=[=](vector<int>n)->int {
        auto m = 0;
        for(int x:n) {
            m = (m>x)? m : x;
        }
        return m+x1+x2+x3+x4;
	};

	cout << maior({1,2,3,4,5,6,7,8,9}) << endl;

	return 0;
}
