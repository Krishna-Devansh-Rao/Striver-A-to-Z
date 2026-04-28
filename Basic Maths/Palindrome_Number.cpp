// You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.



// A palindrome number is a number which reads the same both left to right and right to left.


class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0) return false;   // negative number ❌

        int original = x;
        int rev = 0;

        while(x > 0){
            int last = x % 10;
            rev = rev * 10 + last;
            x = x / 10;
        }

        return original == rev;
    }
};
