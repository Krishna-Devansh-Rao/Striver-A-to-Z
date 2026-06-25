// Mini Coding Practice (Don't use AI)
// Print all elements.
// Print elements in reverse.
// Find the sum.
// Find the largest element.
// Find the smallest element.
// Count even numbers.
// Count odd numbers.
// Multiply every element by 2.
// Print only negative numbers.
// Find the average.


#include <iostream>
using namespace std;
int arr[] = { 2,3,4,5,1};
int n = sizeof(arr)/sizeof(arr[0]);

// Print all elements.
// int main(){
    //     for(int i = 0 ;i<n;i++){
//         cout << arr[i];
// }
// cout << endl;
// }


// Print elements in reverse.
// int main(){
//     for(int i = n-1 ;i>= 0;i--){
//         cout << arr[i];
// }
// cout << endl;
// }
        
        
// Find the sum.
// int sum ;
// int main(){
//         for(int i = 0 ;i<n;i++){
//             sum = arr[i]+ sum;
//         }
// cout << sum << endl;
// }
        
        
// Find the largest element.
// int main(){
//     int max = arr[0];
//     for(int i = 0 ; i <n;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     cout << max << endl;
// }


// Find the Smallest element.
// int main(){
// int min = arr[0];
//     for(int i = 0 ; i <n;i++){
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     cout << min << endl;
// }


// // Count even numbers.
// int main(){
// int even = arr[0];
//     for(int i = 0 ; i <n;i++){
//         if(arr[i] % 2 == 0){
//             even = arr[i];
//             cout << even << " ";
//         }
//     }
//     cout << endl;
// }


// // Count odd numbers.
// int main(){
// int odd = arr[0];
//     for(int i = 0 ; i <n;i++){
//         if(arr[i] % 2 != 0){
//             odd = arr[i];
//             cout << odd << " ";
//         }
//     }
//     cout << endl;
// }


// Multiply every element by 2.
// int main(){
// int num = arr[0];
//     for(int i = 0 ; i <n;i++){
//             num = arr[i];
//             num = num*2;
//             cout << num;
//         }
//     cout << endl;
// }


// Print only negative numbers.
// int main(){
// int num = arr[0];
//     for(int i = -2 ; i <n-20;i++){
//             num = arr[i];
//         }
//         cout << num;
//     cout << endl;
// }


// Find the average.
int main(){
    int sum = arr[0];
    int avg = 0 ;
        for(int i = 0 ;i<n;i++){
            sum = arr[i]+ sum;
            avg = sum /n;
        }
cout << avg << endl;
}
























