#include <iostream>
#include <map>
using namespace std;

// int main(){

// //     int n;
// //     n = 6;

// //     // int arr[n];
// //     int arr[] = {1,2,1,3,2,1};

// //     for(int i = 0 ; i < n;i++){
// //         arr[n]++;
// //     }
    
// //     int hash[50] = {0};
    
// //     for(int i = 0 ; i < n;i++){
// //         hash[arr[i]]++;
// //     }

// //     cout << "1 occurs : " << hash[1]<< endl;
// //     cout << "2 occurs : " << hash[2]<< endl;
// //     cout << "3 occurs : " << hash[3]<< endl;


// // }

// int main(){

//     int n;
//     n = 8;

//     // int arr[n];
//     int arr[] = {4,4,4,2,2,7,7,1};

//     for(int i = 0 ; i < n;i++){
//         arr[n]++;
//     }
    
//     int hash[50] = {0};
    
//     for(int i = 0 ; i < n;i++){
//         hash[arr[i]]++;
//     }

//     cout << "1 occurs : " << hash[2]<< endl;
//     cout << "2 occurs : " << hash[7]<< endl;
//     cout << "3 occurs : " << hash[1]<< endl;

// }



// int main(){

//     int n;
//     n = 10;

//     // int arr[n];
//     int arr[] = {1,2,3,1,2,3,1,1,4,5};

//     for(int i = 0 ; i < n;i++){
//         arr[n]++;
//     }
    
//     int hash[50] = {0};
    
//     for(int i = 0 ; i < n;i++){
//         hash[arr[i]]++;
//     }

//     cout << "1 occurs : " << hash[1]<< endl;
//     cout << "2 occurs : " << hash[2]<< endl;
//     cout << "3 occurs : " << hash[3]<< endl;
//     cout << "4 occurs : " << hash[4]<< endl;
//     cout << "5 occurs : " << hash[5]<< endl;

// }


int main(){
    int n = 6;
    int arr[] = {10,20,10,30,20,10};
    // int arr[] = {1000,2000,1000,3000};

    map<int,int> freq;

    for(int i = 0 ; i < 6; i++){
        freq[arr[i]]++;
    }

    cout << freq[10] << endl;
    cout << freq[20]<< endl;
    cout << freq[30]<< endl;
    


}



























