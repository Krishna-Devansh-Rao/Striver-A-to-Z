#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;

    int arr[n];
    cin >> arr[n];

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }

    int hash[100] = {0};

    for(int i = 0;i<n;i++){
        hash[arr[i]]++;
    }

    int maxFreq = 0;
    int maxElemnt = -1;

    for(int i =0;i<n;i++){
        if(hash[i] > maxFreq){
            maxFreq = hash[i] ;
            maxElemnt = i;
        }
    }

    cout << "Max elemnt " << maxElemnt << endl;
cout << "Max Freq " << maxFreq << endl;


    // cout << "Hash[0] : " << hash[0] << endl;
    // cout << "Hash[1] : " << hash[1] << endl;
    // cout << "Hash[2] : " << hash[2] << endl;
    // cout << "Hash[3] : " << hash[3] << endl;
    // cout << "Hash[4] : " << hash[4] << endl;
    // cout << "Hash[5] : " << hash[5] << endl;

    cout << endl;
}