//Basic Mathematics for DSA 
//Fast Exponentiation.
// Normal Method for : a^b = O(b).
// Implementation.



// below is the slow exponentiation method shown.
#include<iostream>
using namespace std;
int slowExponentiation(int a, int b){
    int ans = 1 ; //initialize kiya hai.
    for(int i=0;i<b;++i){
        ans*=a;
    }
    return ans;
}
int main(){
    cout<<slowExponentiation(5,4)<<endl;
    return 0;
}

// Complexity is O(b).