//check given number prime or not


/*Note : we can also check for 
for(i=2;i<=sqrt(n);i++)*/
#include<iostream>
using namespace std;
bool checkPrime(int n){
    int i=2;
    for(i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }return true;
}
int main(){
    int n; 
    cout<<"Enter the value of n: "<<endl; 
    cin >>n;
    bool isPrime = checkPrime(n);
    if(isPrime){
        cout<<"The number "<<n<<" is a prime number."<<endl;
    }else{
        cout<<"The number "<<n<<" is not a prime number."<<endl;
    }
    return 0;
}


