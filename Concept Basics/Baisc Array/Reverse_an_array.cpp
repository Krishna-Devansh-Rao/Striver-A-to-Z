#include <iostream>
using namespace std;


int main(){
    int size , arr[] = {1,2,3,4,5};
    size = sizeof(arr)/sizeof(arr[0]);
int left = 0;
int right = size - 1;

while( left < right ){
    swap(arr[left], arr[right]);
    left++;
    right--;
}
for(int i = 0; i < size; i++){
 cout << arr[i];
}
cout << endl;
}




// TuF+ code
int reverse = 0;
int left = 0;
int right = n - 1;

while( left < right ){
    swap(arr[left], arr[right]);

    left++;
    right--;
}

for(int i = 0; i < n; i++){
 cout << arr[i];
}


