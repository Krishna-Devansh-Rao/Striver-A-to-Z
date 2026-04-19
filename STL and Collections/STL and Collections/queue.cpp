#include <iostream>
#include <queue>
#include <functional> 
using namespace std;

void explainqueue(){
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

int main(){
    explainPQS();
}