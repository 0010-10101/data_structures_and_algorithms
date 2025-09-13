//103_3.cpp
//Call stack ka code.


//Example of head recursion.

#include<iostream>
using namespace std;
void PrintCounting(int n){
    //base case
    if(n==0){
        return;
    }
    
    //recursive relation.
    PrintCounting(n-1);

    //processing
    cout<<n<<endl;

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
1
2
3
4
5
6
7
8
9
10
PS I:\DSA with C++\DSA VSCode> 
*/