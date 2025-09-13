//Recap of Sieve of Eratosthenes
// Unoptimised hai.
// Jo puri array bani hai usko sieve kehte hai.
#include<iostream>
#include<vector>
using namespace std;
vector<bool> Sieve(int n){
    // creating a sieve array of N size telling isPrime.
    vector<bool> sieve(n+1, true);      // n+1 size ki array, true matlab sabko starting mai true mark kiya hai.
    sieve[0]=sieve[1]=false;
    //Loop chalao.
    for(int i=2;i<=n;i++){
        if(sieve[i] == true){   // jo prime numbers hai unke multiples ko nonprime mark kr do
            int j=i*2;
            //multiple nikal rahe
            while(j<=n){
                sieve[j]=false;
                j += i;
            }
        }
    }
    return sieve;
}
int main(){
    vector<bool>sieve=Sieve(25);
    cout<<"The prime numbers between 0 to N are:"<<endl;
    for(int i=0;i<=25;i++){
        if(sieve[i]){
            cout<<i<<" ";
        }
    }
    return 0;
}

/*
The prime numbers between 0 to N are:
2 3 5 7 11 13 17 19 23
PS I:\DSA with C++\DSA VSCode>
*/