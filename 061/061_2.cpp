//Divide 2 numbers using binary search.
// How to take absolute value in C++ use -> 
// abs()

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solve(int dividend, int divisor){
    int s = 0;
    int e = abs(dividend);

    int mid = s + (e-s)/2;
    int storeAnswer = 0;
    while(s<=e){
        //perfect solution
        if(abs(mid*divisor) == dividend){
            
            // return mid;

            //rather than returning value hum answer mai store krte hai.
            storeAnswer = mid;
            //kyuki answer mil chuka hai .... aage loop chalane ka fayda nhi hai...
            break;
        }
        //not perfect solution.
        if(abs(mid*divisor)>abs(dividend)){
            //search left.
            e = mid - 1;
        }
        if(abs(mid * divisor) < abs(dividend)){
            //answer store karo.
            storeAnswer = mid;
            // search right side.
            s = mid + 1;
        }
        mid = s + ( e-s )/2;
    }
    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)){
        return storeAnswer;
    }
    else{
        return -storeAnswer;
    }
    

}
int main(){
    int dividend = -21;
    int divisor = 7;

    int ans = solve(dividend, divisor);
    cout<<"Ans is " << ans << endl;
    return 0;
}