// Count number of odd digits in a number

// You are given an integer n. You need to return the number of odd digits present in the number.
// The number will have no leading zeroes, except when the number is 0 itself.

class Solution {
   public:
    int countDigit(int n) {
        int count = 0;
        while(n>0){
            int last_digit = n % 10 ;

            if (last_digit % 2 == 1)
            {
                count++;
                
            }
            n = n/10;
        }
        return count;
    }
};







