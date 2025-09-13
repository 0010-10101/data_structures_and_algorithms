#include<iostream>
#include<cmath>
using namespace std;
int decimalToBinaryMethod1(int n){
    int binaryno = 0; //initialised with 0.
    int i=0; //initialised with 0;
    //Division method.
    while(n>0){
        int bit=n%2;
        binaryno = bit*pow(10,i++)+binaryno;
        n=n/2;
    }
    return binaryno;
}
int main(){
    //decimal to binary conversion using division method.
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int binary = decimalToBinaryMethod1(n);
    cout<<binary<<endl;
}