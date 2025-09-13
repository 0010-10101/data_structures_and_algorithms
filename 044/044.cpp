//program to take input values of an array.  
#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter the input values of the array."<<endl;
    for(int index=0;index<10;index++)
    {
        cin>>arr[index];
    }
    cout<<"Printing the values in the array."<<endl;
    for(int index=0;index<10;index++){
        cout<<arr[index]<<" ";
    }
    return 0;
}