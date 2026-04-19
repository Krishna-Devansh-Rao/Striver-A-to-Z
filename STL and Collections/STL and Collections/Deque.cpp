#include <iostream>
#include <utility>
#include <deque>

using namespace std;


void explaindeque(){
    // deque<int> de;
    // deque<string> ch;
    // de.push_back(9);
    // de.push_back(7);
    // de.push_back(3);
    // ch.push_back("King Kohli : ");


    // for(int i =0;i < de.size();i++){
    //     cout << ch[i] << "" << de[i] ;
    // }

    // cout << endl;

    // iterator
    // auto begin_itr = de.begin();
    // auto end_itr = de.end();
    // // deque<int>::iterator begin_itr = de.begin();
    // // deque<int>::iterator end_itr = de.end();
    // cout << *begin_itr << endl;
    // cout << *end_itr << endl;

    // for(auto i : de){
    //     cout << i <<" ";
    // }
    // cout << endl;
    
    // cout << "-> ";
    // reverse Iterator
    // auto reverseBegin = de.begin();
    // auto reverseEnd = de.end();
    // for(auto i = reverseBegin ; i < reverseEnd ; i++){
        //     cout << *i << "";
        // }
        
        
        // Erase - jitna jarurat hai utna delete kar sakte hai 
        // de.erase(de.begin(), de.end() - 1);
        // for(auto it : de ){
        //     cout << it << " ";
        // }

// clear - sab kuch dodle ho jayega kuch bhi nahi bachega 
// de.clear();

// insert
deque<int> de;
de.push_back(7);
de.push_back(5);
de.push_back(2);
de.push_back(5);
de.push_back(22);
de.push_back(1);
de.push_back(4);
de.insert(de.begin() + 3 , 18);

for(auto it : de){
    cout << it << " ";
}
}



int main(){
    explaindeque();
    return 0;
}