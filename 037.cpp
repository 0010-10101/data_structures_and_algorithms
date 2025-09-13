//factorial of a number
/*

5! = 5*4*3*2*1 = 120

*/
#include<iostream>
using namespace std;
long long int  fact (long long int n){
    long long int fact = 1;
    for(long long int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int n;cin>>n;
    long long int answer = fact(n);
    cout<<"Factorial of the number "<< n << "is: "<<answer<<endl;
    return 0;
}