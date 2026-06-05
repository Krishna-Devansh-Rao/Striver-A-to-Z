// Sum of Array Elements
// Easy

// Company
// Given an array arr of size n, the task is to find the sum of all the elements in the array.


// Example 1
// Input: n=5, arr = [1,2,3,4,5]
// Output: 15
// Explanation: Sum of all the elements is 1+2+3+4+5 = 15


#include <iostream>
using namespace std;
int main(){
    int arr[5] = {2,4,6,8} ;
    int size = sizeof(arr)/sizeof(arr[0]);

    int sum = 0 ;
    for(int i = 0 ; i < size ; i++){
        sum = sum + arr[i] ;
    }
    cout << sum << endl;

cout << endl;
}

// TuF+ solution
class Solution{
public:
	int sum(int arr[], int n) {
	  int total = 0;
      for(int i = 0 ; i < n ; i++){
        total += arr[i];
      }
    
      return total ;
	}
};