#include <iostream>
#include <vector>
using namespace std;


int main(){
int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // To print an array 
    // for (int i = 0; i < n; i++) {
        //     cout << arr[i] << " ";
        // }
        
        // To reverse an array 
        // for (int i = n - 1; i >= 0; i--) {
            // cout << arr[i] << " ";
            // }
            
            
            // To sum an array 
            // int sum = 0;
            // for (int i = 0; i < n; i++) {
                //     sum += arr[i];
                // }        
                // cout << sum;
                
                // Max num
                int maxi = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > maxi)
                    maxi = arr[i];
                }                
                cout << "Max :l" << maxi  << endl;
                
                // Min num
                int mini = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] < mini)
                    mini = arr[i];
                }
                cout << "Min :" << mini  << endl;
                
                
                // Count
                int cnt = 0;
                for (int x : arr) {
                    if (x % 2 == 0)
                    cnt++;
                }
                cout << "Count :" << cnt  << endl;
                
                
                for (int i = 0; i < n; i++) {
                    arr[i] *= 2;
                    cout <<  arr[i];
                }
                
                
                
                







                



cout << endl;
}
