//104_4.cpp

//traversing array using recursion.

//pass by reference example.
#include<iostream>
using namespace std;

void print(int arr[], int n, int& i){
    //base case
    if(i>=n){
        return;
    }

    //1 case solve kar diya.
    cout<<arr[i]<<" -> ";
    //baki recursion sambhal lega.
    int val = ++i;
    print (arr, n, val);


    // pehle printing statement ke upar likha tha, niche likha toh kya hoga ?
    // cout<<arr[i]<<" -> ";
}
int main(){
    int arr[5] = {10,20,30,40,50};
    int n=5;
    int i=0;
    print(arr,n, i);
    return 0;
}


/*
Output:

10 -> 20 -> 30 -> 40 -> 50 -> 
PS I:\DSA with C++\DSA VSCode> 
*/