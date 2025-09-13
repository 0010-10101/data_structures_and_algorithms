#include<iostream>
using namespace std;
int main(){
    int a = 5;

    // int* p = a; //we cannot give value , always need to give address.
    int* p = &a;
    return 0;
}