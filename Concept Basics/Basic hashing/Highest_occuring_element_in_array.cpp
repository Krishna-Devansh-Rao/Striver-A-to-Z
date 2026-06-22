#include <iostream>
#include <map>
using namespace std;


int main(){
    int nums;
    cin >> nums;

int arr[nums];

for(int i = 0;i < nums ;i++){
    cin >> arr[i];
}
int hash[100] ={0};\
for(int i =0; i < nums;i++){
    hash[arr[i]]++ ;
}


int maxFreq = 0;
int maxElement = 0;

for(int i = 0;i <100  ; i++){
    if(hash[i] > maxFreq){
        maxFreq = hash[i];
        maxElement = i ;
    }
}

cout << "Max elemnt " << maxElement << endl;
cout << "Max Freq " << maxFreq << endl;


}

#include <iostream>
using namespace std;

// int main()
// {
//     int nums;
//     cin >> nums;

//     int arr[nums];

//     for(int i = 0; i < nums; i++)
//     {
//         cin >> arr[i];
//     }

//     int hash[100] = {0};

//     // Frequency Count
//     for(int i = 0; i < nums; i++)
//     {
//         hash[arr[i]]++;
//     }

//     int maxFreq = 0;
//     int maxElement = 0;

//     // Find Highest Frequency
//     for(int i = 0; i < 100; i++)
//     {
//         if(hash[i] > maxFreq)
//         {
//             maxFreq = hash[i];
//             maxElement = i;
//         }
//     }

//     cout << "Max Element = " << maxElement << endl;
//     cout << "Max Frequency = " << maxFreq << endl;

//     return 0;
// }