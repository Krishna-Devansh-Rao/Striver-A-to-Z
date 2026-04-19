#include <iostream>
#include <utility>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <functional>
#include <set>
#include <map>
using namespace std;

void explainMap(){
    map<int , string> mpp;
    mpp[1] = "abc";
    mpp[2] = "def";
    mpp[3] = "ghi";
    mpp.insert({4,"Krishna"});

    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }
}


int main(){
explainMap();

}