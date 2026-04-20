// Count All the Numbers 
class Solution {
   public:
    int countDigit(int n) {
        if (n == 0) return 1;
        int count = 0;
        while (n > 0) {
            count++;
            n = n / 10;
        }
        return count;
    }
};


//  Count all the ODD numbers 

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


//  Reverse a Number

