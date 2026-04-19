#include <iostream>
#include <utility>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <functional>
#include <set>
using namespace std;

// Stores the unique and in ascending order
void explainSet(){
    set<int>sst;
    sst.insert(2);
    sst.insert(22);
    sst.insert(42);
    sst.insert(22);
    sst.insert(32);

    // for(auto it: sst){
    //     cout << it << " ";
    // }

    // auto it = sst.find(132);
    // if(it != sst.end()){
    //     cout << *it;
    //     cout << endl;
    //     cout << "enelment  found";
    // }
    // else{
    //     cout << "enelment not found";
    // }
    
    // cout << endl;
    // cout << sst.count(21);  // bata dega ki element exist karta hai ya nahi 

    // sst.erase(22);
    // for(auto it: sst){
    //     cout << it << " ";
    // }

    auto it = sst.lower_bound(35);
    cout << *it;



}


int main(){
explainSet();


}