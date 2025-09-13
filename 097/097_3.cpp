//Fast Exponentiation

//Implementation.
#include<iostream>
using namespace std;
int fastExponentiation(int a, int b){
    int ans = 1; // initialize kiya.
    while(b>0){
        if(b & 1){          // bitwise , odd nikalne ka asan tarika.
            //odd
            ans = ans * a;
        }
        a = a*a;
        b>>=1;       // b ko right shift karo 1 se. 
    }
    return ans;
}
// Fast exponentiation ki Time Complexity is : O(log b)
int main(){
    cout<<fastExponentiation(5,4)<<endl;
    return 0;
}