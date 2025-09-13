//counting from 1 to N.
#include<iostream>
using namespace std;

//below n is an input parameter.
void printCounting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    //here n is an argument.
    printCounting(n);
    return 0;
}