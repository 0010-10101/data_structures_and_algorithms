//leetcode question.
//reverse the integer.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;
}


/*
//Leetcode Solution.


class Solution {
public:
    int reverse(int x) {
       int answer = 0, rem = 0;
       bool isNegative = false;
       if(x<=INT_MIN){
        return 0;
       }
       if(x<0){
        isNegative = true;
        x = -x;
       }
       while(x>0){
        if(answer > INT_MAX / 10){
            return 0;
        }
        int digit = x % 10;
        answer = answer * 10 + digit;
        x= x/10;
       }
       return isNegative ? -answer : answer;
    }
};


*/