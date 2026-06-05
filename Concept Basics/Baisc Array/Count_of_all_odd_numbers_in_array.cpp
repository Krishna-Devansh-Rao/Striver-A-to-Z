#include <iostream>
using namespace std;

// Normal Solution 
int main(){
    int arr[] = {1,2,3,4,5,67,8,9};
    int size , count = 0;
    size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i < size ; i++){
        if(arr[i] % 2 != 0){
            count++ ; 
        }
    }
    cout << count << endl;


}


// Tuf+ solution
class Solution {
   public:
    int countOdd(int arr[], int n) {
        int countOdd = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                countOdd++;
            }
        }
        return countOdd;
    }
};
