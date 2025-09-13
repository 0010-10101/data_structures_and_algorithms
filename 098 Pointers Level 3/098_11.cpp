//Reference variable , another concept.

//Return by reference.

// Pass by reference ho skta hai pointers ka, toh kya return by reference ho skta hai?
#include<iostream>
using namespace std;
void solve(int*& p){
    p=p+1;
}
int main(){
    int x= 8;
    int* ptr = &x;
    cout<<"Before"<<endl<<ptr<<endl;
    solve(ptr);
    cout<<"After"<<endl<<ptr<<endl;
    return 0;
}

/*
Output :


Before
0x5ffe9c
After   
0x5ffea0
PS I:\DSA with C++\DSA VSCode> 


Change takes place before and after calling the function.
*/