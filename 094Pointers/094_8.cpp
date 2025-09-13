#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int* ptr = &a;

    // we have copied the pointer.
    int* secondPtr = ptr;

    cout<<*ptr<<endl;

    cout<<*secondPtr<<endl;
    return 0;
}