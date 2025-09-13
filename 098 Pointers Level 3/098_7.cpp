//Reference variable concept 3
// How to pass by reference.
#include<iostream>
using namespace std;
void solve(int& value){     //Reference variable
    //changes are made to the original variable.
    value++;
}
int main(){
    int a = 5;
    solve(a);
    cout<<a<<endl;
    return 0;
}
/*
6
PS I:\DSA with C++\DSA VSCode> 
*/