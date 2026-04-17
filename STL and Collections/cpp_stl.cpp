#include <iostream>
#include <utility>
using namespace std;

void explainPair1(){
    pair<int, int> pr1 = make_pair(1, 8);
    cout << pr1.first << " " << pr1.second << endl;
}

void explainPair2(){
    pair<int, char> pr2 = make_pair(1, 'k');
    cout << pr2.first << " " << pr2.second << endl;
}

void explainPair3(){
    pair<pair<int,char>, pair<int,char>> pr3 =
    make_pair(make_pair(1,'d'), make_pair(2,'r'));
    
    cout << pr3.first.first << " ";
    cout << pr3.first.second << " ";
    cout << pr3.second.first << " ";
    cout << pr3.second.second << endl;
}

int main(){
    explainPair1();
    explainPair2();
    explainPair3();
    return 0;
}