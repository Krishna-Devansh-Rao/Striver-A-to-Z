// Given an integer age, print on the screen:

Adult if age >= 18
Teen if age < 18
Do not change the case of any letter in "Adult" and "Teen" while printing the answer.


class Solution {
public:
    void isAdult(int age) {
        if(age >=18){
            cout << "Adult"<<endl;
        }
        else{
            cout << "Teen"<<endl;
        }
    }
};