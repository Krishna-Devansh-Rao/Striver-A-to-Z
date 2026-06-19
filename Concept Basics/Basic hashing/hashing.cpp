#include <iostream>
#include <map>
using namespace std;



// Number hashing
// int main(){
//     int n;
//     cout << "Input  n : " ;
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
//     int hash[50] = {0};
//     for(int i  = 0 ; i < n ; i++){
//         hash[arr[i]]++;
//     }
//     cout << "Freq of hash[1]: " << hash[1]<< endl;
//     cout << "Freq of hash[2]: " <<hash[2]<< endl;
//     cout << "Freq of hash[3]: " <<hash[3]<< endl;



// character table
// int main()
// {
//     string s;
//     // cin >> s;
//     s = "banana";
//     int hash[26] = {0};
//     for(int i = 0; i < s.size(); i++)
//     {
//         hash[s[i] - 'a']++;
//     }
//     cout << "b -> " << hash[1] << endl;
//     cout << "a -> " << hash[0] << endl;
//     cout << "n -> " << hash[13] << endl;
//     return 0;
// }


// Map
    
int main(){
    int arr[] = {1000,2000,1000,3000};

    map<int,int> num;

    for(int i = 0 ; i < 4; i++){
        num[arr[i]]++;
    }

    cout << num[1000];



}










