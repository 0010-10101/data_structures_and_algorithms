#include<iostream>
using namespace std;
void solve(int* value){
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
0x5ffe94
After   
0x5ffe94
 

No change is seen in value because it was pass by value, copy was created and operation was performed on it.
Original variable stayed the same.
*/