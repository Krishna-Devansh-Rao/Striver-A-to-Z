#include <iostream>
#include <vector>
#include <utility>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <functional> 
#include <set> 
#include <map> 
using namespace std;

void explainPair(){
    pair<string , string> na1 = make_pair("King" , "Kohli");
    pair<int , int> na2 = make_pair(9 , 73);
    cout << na1.first << " " ;
    cout << na1.second << ": " ;
    cout << na2.first << "" ;
    cout << na2.second << " " ;
}

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

// for(auto it : vec){
//     cout << it << " ";
// }
}

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
ls.insert(ls.begin()  , 18);

// for(auto it : ls){
//     cout << it << " ";
// }
}

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

// for(auto it : de){
//     cout << it << " ";
// }
}

void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(7);
    st.push(5);
    st.size();

    cout << st.size() << endl;
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    
    while(st.empty() == false){
        cout << st.top() << endl;
        st.pop();
        
    }


}

void explainQueue(){
    queue<int> qu;
    qu.push(1);
    qu.push(7);
    qu.push(5);

    cout << qu.size() << endl;
    cout << qu.front() << endl;

    qu.pop();
    cout << qu.front() << endl;

    qu.pop();
    cout << qu.front() << endl;

    while(!qu.empty()){
        cout << qu.front() << endl;
        qu.pop();
    }
}

void explainPQ(){
    priority_queue<int> pq;
    pq.push(12);
    pq.push(72);
    pq.push(52);

    cout << pq.size() << endl;
    cout << pq.top() << endl;

    pq.pop();
    cout << pq.top() << endl;

    pq.pop();
    cout << pq.top() << endl;

    while(pq.empty() == false){
        cout << pq.top() << endl;
        pq.pop();
    }
}

void explainPQS(){
    priority_queue<int, vector<int> , greater<int> > pq;
    pq.push(12);
    pq.push(72);
    pq.push(52);

    cout << pq.size() << endl;
    cout << pq.top() << endl;

    pq.pop();
    cout << pq.top() << endl;

    pq.pop();
    cout << pq.top() << endl;

    while(pq.empty() == false){
        cout << pq.top() << endl;
        pq.pop();
    }
}

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
explainPair();
explainVector();
explainList();
explaindeque();
explainStack();
explainQueue();
explainPQ();
explainPQS();
explainSet();
explainMap();
return 0 ;
}