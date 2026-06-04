// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



// *

// **

// ***

// ****

// *****

// ****

// ***

// **

// *


class Solution {
public:
    void pattern10(int n) {
for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << "*";
        }
        cout << endl;
    }
    // Lower part
    for(int i = 0 ; i < n ; i++){
        for(int j = 2 ; j <= n - i  ; j++){
            cout << "*";
        }
        cout << endl;
    }
    }
};
