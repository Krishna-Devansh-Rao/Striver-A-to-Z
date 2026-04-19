#include <iostream>
#include <utility>
#include <list>
using namespace std;

void explainList(){
    // list<int> ls;
    // list<string> ch;
    // ls.push_back(9);
    // ls.push_back(7);
    // ls.push_back(3);
    // ch.push_back("King Kohli : ");


    // for(int i =0;i < ls.size();i++){
    //     cout << ch[i] << "" << ls[i] ;
    // }

    // cout << endl;

    // iterator
    // auto begin_itr = ls.begin();
    // auto end_itr = ls.end();
    // // list<int>::iterator begin_itr = ls.begin();
    // // list<int>::iterator end_itr = ls.end();
    // cout << *begin_itr << endl;
    // cout << *end_itr << endl;

    // for(auto i : ls){
    //     cout << i <<" ";
    // }
    // cout << endl;
    
    // cout << "-> ";
    // reverse Iterator
    // auto reverseBegin = ls.begin();
    // auto reverseEnd = ls.end();
    // for(auto i = reverseBegin ; i < reverseEnd ; i++){
        //     cout << *i << "";
        // }
        
        
        // Erase - jitna jarurat hai utna delete kar sakte hai 
        // ls.erase(ls.begin(), ls.end() - 1);
        // for(auto it : ls ){
        //     cout << it << " ";
        // }

// clear - sab kuch dodle ho jayega kuch bhi nahi bachega 
// ls.clear();

// insert
list<int> ls;
ls.push_back(7);
ls.push_back(5);
ls.push_back(2);
ls.push_back(5);
ls.push_back(22);
ls.push_back(1);
ls.push_back(4);
ls.insert(ls.begin() + 3 , 18);

for(auto it : ls){
    cout << it << " ";
}
}



int main(){
    explainList();
    return 0;
}