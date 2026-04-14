// // Print last character of string

// Given a string s. Return the last character of the given string s.


class Solution{
    public:
        char lastChar(string& s){
            //your code goes here
            int n  = s.size() ;
        return s[n-1];
        }
};