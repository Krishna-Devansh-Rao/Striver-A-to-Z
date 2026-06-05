#include <iostream>
using namespace std;

// Normal Solution 
int main(){
    int arr[] = {5,3,2,4,1};
    int size , count = 0;
    size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i < size - 1 ; i++){
        for (int j = 0; j <  size - 1 ; j++)
        {
            if( arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i = 0 ; i < size ; i++){
        cout << arr[i];
    }
}

// Tuf+ code
class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {

for(int i = 0; i < n-1; i++){
    if( arr[i] > arr[i+1]){
        return false;
    }
}
return true;

    }
};
