//103_1.cpp

#include<iostream>
using namespace std;
int factorial(int n){
    cout<<"Function is called for n : "<< n<<endl;
    //Base case is mandatory , it teaches when to stop.
    if(n==1) return 1;  

    //Recursive Relation.
    int chotiProblemkaAns = factorial(n-1);
    int badiProblemkaAns = n * chotiProblemkaAns;
    return badiProblemkaAns;
}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;    
    cin>>n;
    int ans = factorial(n);
    cout<<"Answer is : "<<ans<<endl;
    return 0;
}

/*

Enter the value of n:
5
Function is called for n : 5
Function is called for n : 4
Function is called for n : 3
Function is called for n : 2
Function is called for n : 1
Answer is : 120
PS I:\DSA with C++\DSA VSCode>
*/