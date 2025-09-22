//104_6.cpp
//To find maximum number from the array using recursion.
//recursion code , here not using loops.


// hint solve usnig pass by reference : sirf & add kr do.
#include<iostream>
#include<climits>
using namespace std;
void findMax(int arr[], int n, int i, int& maxi){
    //base case.
    if(i>=n){
        //array khatam/ pura traverse ho gya to wapas aa jao.
        return;
    }
    //ek case solve karo.
    //current element check kro for max.
    if(arr[i]>maxi){
        maxi = arr[i];
    }
    //baki recursion sambhal lega.
    findMax(arr,n, i+1, maxi);      //yaha i++ or ++i use mt krna thoda functionality ka difference hai.
}
int main(){
    int arr[]={10,30,21,44,32,17,19,66};
    int n = 8;
    int i = 0;
    // ek function banao.
    int maxi = INT_MIN;

    // maxi kyu pass kiya? answer nikalna hai, isme store krenge.
    findMax(arr, n ,i, maxi);       
    cout<<"Maximum number is : " <<maxi <<endl;
    return 0;
}


/*
Output : 
Maximum number is : 66
PS I:\DSA with C++\DSA VSCode> 

*/


