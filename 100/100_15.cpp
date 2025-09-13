#include<iostream>
using namespace std;
void Q(int z){
    z += z;
    cout<<z << " ";
}
void  P(int *y){
    int x = *y + 2;
    Q(x);
    *y = x - 1;
    cout<<x << " ";
}
int main(){
    int x = 5;
    P(&x);
    cout<<x;
    return 0;
}

// Pass by value concept is applied here, dry run carefully.
/*
14 7 6
PS I:\DSA with C++\DSA VSCode> 
*/