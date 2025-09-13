//103_2.cpp
//Call stack ka code.


//Example of tail recursion.

#include<iostream>
using namespace std;
void PrintCounting(int n){
    //base case
    if(n==0){
        return;
    }
    //processing
    cout<<n<<endl;

    //recursive relation.
    PrintCounting(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    PrintCounting(n);
    return 0;
}

/*
Enter the value of n:
10

10
9 
8 
7 
6 
5 
4 
3 
2
1
PS I:\DSA with C++\DSA VSCode> 
*/