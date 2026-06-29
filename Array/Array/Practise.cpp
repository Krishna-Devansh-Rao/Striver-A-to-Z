#include <iostream>
using namespace std;

// // // Mini Coding Practice (Don't use AI)
// // // Print all elements.
// // // Print elements in reverse.
// // // Find the sum.
// // // Find the largest element.
// // // Find the smallest element.
// // // Count even numbers.
// // // Count odd numbers.
// // // Multiply every element by 2.
// // // Print only negative numbers.
// // // Find the average.


// // // int arr[] = { 2,3,4,5,1};
// // // int n = sizeof(arr)/sizeof(arr[0]);

// // // Print all elements.
// // // int main(){
// //     //     for(int i = 0 ;i<n;i++){
// // //         cout << arr[i];
// // // }
// // // cout << endl;
// // // }


// // // Print elements in reverse.
// // // int main(){
// // //     for(int i = n-1 ;i>= 0;i--){
// // //         cout << arr[i];
// // // }
// // // cout << endl;
// // // }
        
        
// // // Find the sum.
// // // int sum ;
// // // int main(){
// // //         for(int i = 0 ;i<n;i++){
// // //             sum = arr[i]+ sum;
// // //         }
// // // cout << sum << endl;
// // // }
        
        
// // // Find the largest element.
// // // int main(){
// // //     int max = arr[0];
// // //     for(int i = 0 ; i <n;i++){
// // //         if(arr[i]>max){
// // //             max = arr[i];
// // //         }
// // //     }
// // //     cout << max << endl;
// // // }


// // // Find the Smallest element.
// // // int main(){
// // // int min = arr[0];
// // //     for(int i = 0 ; i <n;i++){
// // //         if(arr[i]<min){
// // //             min = arr[i];
// // //         }
// // //     }
// // //     cout << min << endl;
// // // }


// // // // Count even numbers.
// // // int main(){
// // // int even = arr[0];
// // //     for(int i = 0 ; i <n;i++){
// // //         if(arr[i] % 2 == 0){
// // //             even = arr[i];
// // //             cout << even << " ";
// // //         }
// // //     }
// // //     cout << endl;
// // // }


// // // // Count odd numbers.
// // // int main(){
// // // int odd = arr[0];
// // //     for(int i = 0 ; i <n;i++){
// // //         if(arr[i] % 2 != 0){
// // //             odd = arr[i];
// // //             cout << odd << " ";
// // //         }
// // //     }
// // //     cout << endl;
// // // }


// // // Multiply every element by 2.
// // // int main(){
// // // int num = arr[0];
// // //     for(int i = 0 ; i <n;i++){
// // //             num = arr[i];
// // //             num = num*2;
// // //             cout << num;
// // //         }
// // //     cout << endl;
// // // }


// // // Print only negative numbers.
// // // int main(){
// // // int num = arr[0];
// // //     for(int i = -2 ; i <n-20;i++){
// // //             num = arr[i];
// // //         }
// // //         cout << num;
// // //     cout << endl;
// // // }


// // // Find the average.
// // // int main(){
// // //     int sum = arr[0];
// // //     int avg = 0 ;
// // //         for(int i = 0 ;i<n;i++){
// // //             sum = arr[i]+ sum;
// // //             avg = sum /n;
// // //         }
// // // cout << avg << endl;
// // // }




// // // Challenge 1 (Easy)
// // int main(){
// // int arr[] = {4, -1, 7, 0, -5, 8, 0, 2};
// // int n = sizeof(arr)/sizeof(arr[0]);
// // int positive = 0;
// // int negative = 0;
// // int zero = 0;

// // for(int i =0;i < n;i++){
// //     if(arr[i]>0){
// //         positive++;
// //     }
// //     else if(arr[i] == 0){
// //         zero++;
// //     }
// //     else{
// //         negative++;
// //     }
// // }
// // cout << "positive : " << positive << endl;
// // cout << "negative : " << negative << endl;
// // cout << "Zero : " << zero << endl;
// // }


// // // Challenge 2 
// // int main(){
// // int arr[] = {5, 8, 1, 9, 2, 6};
// // int n = sizeof(arr)/sizeof(arr[0]);

// // int even = 0;
// for(int i =0;i < n;i++){
//     if(arr[i] % 2 == 0 ){
//         even = arr[i];
//             cout << even << " ";
// //     }
// // }
// // }


// // Challenge 3
// int main(){
//     int arr[] = {12, 5, 8, 20, 1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int largest  = arr[0];
//     int Smallest  = arr[0];
//     int sum =0;
//     int Avg = 0;

// for(int i = 0;i < n ; i++){
//     if(arr[i] > largest){
//         largest = arr[i];
//     }
//     if(arr[i] < Smallest){
//             Smallest = arr[i];
//         }
//         sum = sum + arr[i];
//         Avg = sum / n;
// }


// cout << "largest : " << largest << endl;
// cout << "Smallest : " << Smallest << endl;
// cout << "sum: " << sum << endl;
// cout << "Avg: " << Avg << endl;


// }

// Swapping an element
// int main(){
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     swap(arr[1],arr[3]);
//     cout << arr[1] << endl;
//     cout << arr[3]<< endl;
    
// }


// reverse an array
int main(){
    int arr[] = {7,2,9,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = n-1 ; i >= 0;i--){
        cout << arr[i] << " ";
    }
    
}



