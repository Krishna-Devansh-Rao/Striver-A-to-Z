#include <iostream>
using namespace std;

// int main(){
//     int arr[] = {5,6,5,4,6,9,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int num1 = 6;
//     int count = 0 ;
//     for(int i = 0 ; i < n ; i++){
//         if( arr[i] == num1){
//             count++;
//         }
//     }
//     cout << count;
// cout << endl;    
// }



int countfreq(int arr[],int num,int n){
    int count = 0 ;
    for(int i = 0 ; i < n; i++){
        if(arr[i] == num){
            count++;
        }
    }
    return count;
}

int main(){
    int num;
    cout << "Input here : ";
    int n ;
    cin >> n;
    int arr[n];
    // cin >> arr[i];
    cout << "Input array here : ";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    cout << "Input Q here : ";
    int q;
    cin >> q;
    cout << "Input num here : ";
    while(q--){
        int num ;
        cin >> num;
    }
    cout << countfreq(arr,num,n);
}

// int countFreq(int arr[], int num, int n){
//     int count = 0;
//     for(int i = 0; i < n; i++){
//         if(arr[i] == num){
//             count++;
//         }
//     }
//     return count;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int q;
//     cin >> q;
//     while(q--){
//         int num;
//         cin >> num;
//         cout << countFreq(arr, num, n) << endl;
//     }
//     return 0;
// }
