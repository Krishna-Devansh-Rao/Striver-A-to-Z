#include <iostream>
#include <utility>
#include <vector>
using namespace std;


void explainVector(){
    // vector<int> vec;
    // vector<string> ch;
    // vec.push_back(9);
    // vec.push_back(7);
    // vec.push_back(3);
    // ch.push_back("King Kohli : ");


    // for(int i =0;i < vec.size();i++){
    //     cout << ch[i] << "" << vec[i] ;
    // }

    // cout << endl;

    // iterator
    // auto begin_itr = vec.begin();
    // auto end_itr = vec.end();
    // // vector<int>::iterator begin_itr = vec.begin();
    // // vector<int>::iterator end_itr = vec.end();
    // cout << *begin_itr << endl;
    // cout << *end_itr << endl;

    // for(auto i : vec){
    //     cout << i <<" ";
    // }
    // cout << endl;
    
    // cout << "-> ";
    // reverse Iterator
    // auto reverseBegin = vec.begin();
    // auto reverseEnd = vec.end();
    // for(auto i = reverseBegin ; i < reverseEnd ; i++){
        //     cout << *i << "";
        // }
        
        
        // Erase - jitna jarurat hai utna delete kar sakte hai 
        // vec.erase(vec.begin(), vec.end() - 1);
        // for(auto it : vec ){
        //     cout << it << " ";
        // }

// clear - sab kuch dodle ho jayega kuch bhi nahi bachega 
// vec.clear();

// insert
vector<int> vec;
vec.push_back(7);
vec.push_back(5);
vec.push_back(2);
vec.push_back(5);
vec.push_back(22);
vec.push_back(1);
vec.push_back(4);
vec.insert(vec.begin() + 3 , 18);

for(auto it : vec){
    cout << it << " ";
}
}



int main(){
    explainVector();
    return 0;
}