#include <iostream>
using namespace std;

// Sum of Array elements
// int main(){
//     int arr[5] = {2,4,6,8} ;
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int sum = 0 ;
//     for(int i = 0 ; i < size ; i++){
//         sum = sum + arr[i] ;
//     }
//     cout << sum << endl;
// cout << endl;
// }

// TuF+ code
// class Solution{
// public:
// 	int sum(int arr[], int n) {
// 	  int total = 0;
//       for(int i = 0 ; i < n ; i++){
//         total += arr[i];
//       }
//       return total ;
// 	}
// };


// Count of all odd number in Array 
// int main(){
//     int arr[] = {1,2,3,4,5,67,8,9};
//     int size , count = 0;
//     size = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0 ; i < size ; i++){
//         if(arr[i] % 2 != 0){
//             count++ ; 
//         }
//     }
//     cout << count << endl;
// }

// // Tuf+ solution
// class Solution {
//    public:
//     int countOdd(int arr[], int n) {
//         int countOdd = 0;
//         for (int i = 0; i < n; i++) {
//             if (arr[i] % 2 != 0) {
//                 countOdd++;
//             }
//         }
//         return countOdd;
//     }
// };



// Check_if_the_array_is_sorted_I
// Normal Solution 
// int main(){
//     int arr[] = {5,3,2,4,1};
//     int size , count = 0;
//     size = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0 ; i < size - 1 ; i++){
//         for (int j = 0; j <  size - 1 ; j++)
//         {
//             if( arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
//     for(int i = 0 ; i < size ; i++){
//         cout << arr[i];
//     }
// }

// // Tuf+ code
// class Solution {
// public:
//     bool arraySortedOrNot(int arr[], int n) {
// for(int i = 0; i < n-1; i++){
//     if( arr[i] > arr[i+1]){
//         return false;
//     }
// }
// return true;
//     }
// };




// Reverse_an_array
// int main(){
//     int size , arr[] = {1,2,3,4,5};
//     size = sizeof(arr)/sizeof(arr[0]);
//     int left = 0;
//     int right = size - 1;
//     while( left < right ){
//         swap(arr[left], arr[right]);
//         left++;
//         right--;
//     }
//     for(int i = 0; i < size; i++){
//         cout << arr[i];
//     }
//     cout << endl;
// }

// // TuF+ code
// int reverse = 0;
// int left = 0;
// int right = n - 1;
// while( left < right ){
//     swap(arr[left], arr[right]);
//     left++;
//     right--;
// }
// for(int i = 0; i < n; i++){
//     cout << arr[i];
// }






