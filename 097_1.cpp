//Leetcode 204 Count Primes.
// Sieve of Eratosthenes
// class Solution {
// public:
//     int countPrimes(int n) {
//         if( n==0 ) return 0;
//         vector<bool> prime(n,true);     // sabko prime mark kiya hai already.
//         prime[0] = prime[1] = false;    //prime ka 0 th aur 1st element false hota
//         int ans = 0; // mujhe answer chahiye, toh usko 0 se initialize kro
//         for(int i=2;i<n;i++){
//             if(prime[i]){
//                 ans++;
//                 int j = 2*i;
//                 while(j<n){
//                     prime[j] = false;
//                     j+=i;
//                 }
//             }
//         }
//         return ans; 
//     }
// };