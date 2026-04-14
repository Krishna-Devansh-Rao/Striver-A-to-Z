// Print X N numbers of times

// Given two integers X and N, print the value X on the screen N times.

// Separate each number by a single space.
// Do not add a space after the last number.
// After printing all N numbers, move to the next line.
// If N = 0, still move to the next line (print an empty line).


class Solution {
public:
    void printX(int X, int N) {

        for(int i =0;i < N;i++){
            cout << X ;
            if(i != N - 1){
                cout << " ";
            }
        }
        cout << endl;
    }
};