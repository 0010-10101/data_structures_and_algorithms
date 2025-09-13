// Optimised sieve of eratosthenes
// Optimisatino 1 on inner loop.
#include<iostream>
#include<vector>

using namespace std;
vector<bool> Sieve(int n){
    vector<bool> sieve(n+1,true);
    sieve[0]=sieve[1]=false;
    for(int i=2;i<=n;i++){
        if(sieve[i]==true){
            //int j=i*2;    // ye unoptimised wala hai.
            int j=i*i;  // optimisation 1.  
            //For above, first unmarked number would be i*i, as others have been marked by 2 to (i-1).
            while(j<=n){
                sieve[j]=false;
                j+=i;
            }
        }
    }
    return sieve;
}
int main(){
    vector<bool>sieve=Sieve(25);
    cout<<"Optimisation 1 output is:"<<endl;
    for(int i=0;i<=25;i++){
        if(sieve[i]){
            cout<<i<<" ";
        }
    }
    return 0;
}