#include <iostream>
#include <utility>
#include <vector>
using namespace std;

// void explainPair1(){
//     pair<int, int> pr1 = make_pair(1, 8);
//     cout << pr1.first << " " << pr1.second << endl;
//     pair<int, char> pr2 = make_pair(1, 'k');
//     cout << pr2.first << " " << pr2.second << endl;
//     pair<pair<int,char>, pair<int,char>> pr3 =
//     make_pair(make_pair(1,'d'), make_pair(2,'r'));    
//     cout << pr3.first.first << " ";
//     cout << pr3.first.second << " ";
//     cout << pr3.second.first << " ";
//     cout << pr3.second.second << endl;
// }

void explainVector(){
    vector<int> vec;
    vector<string> ch;
    vec.push_back(9);
    vec.push_back(7);
    vec.push_back(3);
    ch.push_back("King Kohli : ");
    // ch.push_back("");


    for(int i =0;i < vec.size();i++){
        cout << ch[i] << "" << vec[i] ;
    }


}

int main(){
    explainVector();
    return 0;
}