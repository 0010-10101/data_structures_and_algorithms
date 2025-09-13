#include<iostream>
#include<vector>
#include<cmath>
#include<math.h>

using namespace std;


// Previous concept ka code rakha hai reference ke liye
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



vector<bool> segSieve(int L, int R){
    //get me prime array, I will use it to mark segmentedSieve
    vector<bool>sieve=Sieve(sqrt(R));      // Ye prime sieve nikal rhe.
    vector<int>basePrimes;     // ye sare primes use hoge mark krne ke liye.
    for(int i=0;i<sieve.size();i++){
        if(sieve[i]){
            basePrimes.push_back(i);     // Agar sieve[i] true hai to woh base prime hai.   
        }
    }

    vector<bool> segSieve(R-L+1, true);       // initialize kiya R-L+1 se.
    if(L == 0 || L ==1){
        segSieve[L] = false;
    }
    // ye ho gyi base condition

    //ab sare prime nikal diye, ek ek prime ko uthao unke multiple nikalo
    // fir mark krna shuru karo.
    for(auto prime:basePrimes){
        int first_mul= (L / prime) * prime;
        if(first_mul < L){
            first_mul += prime;
        }
        //mark kr rhe hai below.
        int j = max(first_mul, prime*prime);
        while(j<=R){
            segSieve[j - L] = false;        // j - L karne se proper index aa jayga
            // check resembles in notebook. index 1 resembles 111.
            //array mai 0 se 20 tak allocate ki hai toh 111 map ho rha 1 pe
            
            j+= prime;
        }
    }
    return segSieve;

}
int main(){


    
    // Previous concept ka code rakha hai reference ke liye
    // vector<bool>sieve=Sieve(25);
    // for(int i=0;i<=25;i++){
    //     if(sieve[i]==true){
    //         cout<<i<<" ";
    //     }
    // }



    int L = 110;
    int R = 130;
    vector<bool>ss = segSieve(L,R);             // ss sirf name rakha hai.
    for(int i=0;i<ss.size();i++){
        if(ss[i]){
            cout<<i+L<<" ";
        }
    }
    return 0;
}


/*
Output : 


113 127 
PS I:\DSA with C++\DSA VSCode> 


*/