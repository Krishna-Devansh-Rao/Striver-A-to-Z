#include <iostream>
#include <vector>
#include <utility>
#include <stack>
using namespace std;

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

int main(){
explainStack();
}