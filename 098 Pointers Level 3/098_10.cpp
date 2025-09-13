/*

Reference variable. 
Pass by reference.
Pass by reference kaise krte hai, jo bhi tumhara data type hai uske aage & symbol lagao.

Change is seen in value because it was pass by reference,
copy was not created and operation was performed on original variable.
Original variable changed.
*/
#include<iostream>
using namespace std;
void solve(int*& value){
    value = value + 1;
}
int main(){
    int a=5;
    int* p = &a;

    cout<<"Before"<<endl<<p<<endl;
    solve(p);
    cout<<"After"<<endl<<p<<endl;

    return 0;
}
/*
Output:

Before
0x5ffe9c
After   
0x5ffea0
PS I:\DSA with C++\DSA VSCode> 


*/