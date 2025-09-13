//103_4.cpp
//Fibonacci ka code.
// Keep in mind.
// f(n) = f(n-1) + f(n-2).

#include<iostream>
using namespace std;
int fib(int n){
    //base case
    if(n==1){
        //first term
        return 0;
    }
    if(n==2){
        //second term
        return 1;
    }
    // recursive relation.
    return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    cout<<"Enter the term you want to see:"<<endl;
    cin>>n;
    int ans = fib(n);
    cout<<n<<"the term is: "<<ans<<endl;
    return 0; 
}

/*
Enter the term you want to see:
5
5the term is: 3
PS I:\DSA with C++\DSA VSCode> ^C
PS I:\DSA with C++\DSA VSCode>
PS I:\DSA with C++\DSA VSCode>  & 'c:\Users\user\.vscode\extensions\ms-vscode.cpptools-1.26.5-win32-x64\debugAdapters\bin\WindowsDebugLauncher.exe' '--stdin=Microsoft-MIEngine-In-g0vnsftm.fcb' '--stdout=Microsoft-MIEngine-Out-tsha3etm.gvd' '--stderr=Microsoft-MIEngine-Error-qj31fgrz.drf' '--pid=Microsoft-MIEngine-Pid-lcplzsy0.vtu' '--dbgExe=C:\msys64\ucrt64\bin\gdb.exe' '--interpreter=mi' 
Enter the term you want to see:
7
7the term is: 8
PS I:\DSA with C++\DSA VSCode> 

*/