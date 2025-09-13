//Que1. 

//Print Array (Linear traversal of an array)
#include<iostream>
using namespace std;

void PrintArray(int a[], int n){
    if(n == 0) return;
    cout<<*a <<" ";
    PrintArray(a+1,n-1);

}