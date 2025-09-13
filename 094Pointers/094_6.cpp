#include<iostream>
using namespace std;
int main(){


    // Pointer declaration is a bad practice.
    // int* ptr;


    //NULL Pointer
    int* ptr = nullptr;
    // int* ptr = 0;      // 2nd way of creatin null pointer.
    //shuru mai null se initialize karo baad mai value daal dena

    cout<<ptr<<endl;    // this will access garbage value.

    // cout<<*ptr<<endl;    //this gives segementation fault.
    //segmentation fault means aisi memory access krne ki koshish kr rhe jo exist nhi krti 
    //ya fir tumhare allocated memory space se bahar padi hai.
    return 0;
}