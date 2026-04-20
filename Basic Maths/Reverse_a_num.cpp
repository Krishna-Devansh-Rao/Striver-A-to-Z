// #include <iostream>
// using namespace std;

// void explainReverse(int n){
//     int last_digit,num ;
//     last_digit = num % 10;
// }

// int main(){

//     return 0;
// }



class Solution {
   public:
    int reverseNumber(int n) {
        reverseNumber = 0;
        int num,new_num;
        while(n>0){
            int last_num = num % 10;
            reverseNumber = (new_num * 10) + last_num;
            num = num/10;
        }
    return new_num;
    }
};




