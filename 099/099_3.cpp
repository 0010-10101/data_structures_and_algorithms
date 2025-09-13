//Optimisation number 2 on Sieve of Eratoshtenes 
// Optimising on outer loop.
#include<iostream>
#include<vector>
using namespace std;
vector<bool> Sieve(int n){
    vector<bool> sieve(n+1, true);
    sieve[0]=sieve[1]=false;
    for(int i=2;i*i<=n;i++){        // optimisation 2 on outer loop
        if(sieve[i]==true){
            int j=i*i;      // innner loop from optimisation 1.
            while(j<=n){
                sieve[j]=false;         //false maar kr rhe.
                j+=i;
            }
        }
    }
    return sieve;
}
int main(){
    vector<bool>sieve = Sieve(25);
    cout<<"Optimisation 2 based on outer loop is:"<<endl;
    for(int i=0;i<=25;i++){
        if(sieve[i]){
            cout<<i<<" ";
        }
    }
    return 0;
}

/*

Output:

Optimisation 2 based on outer loop is:
2 3 5 7 11 13 17 19 23 
PS I:\DSA with C++\DSA VSCode> 

*/