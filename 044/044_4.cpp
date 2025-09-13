/*Note : Whenever we pass any array in an function we also need to pass its size with the array.
Follow the above practice seriously.*/

//whenever we pass array in function it is always pass by reference. 

//Example of pass by reference.
#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void inc(int arr[], int size){
    arr[0] = arr[0] + 10;

    printArray(arr,size);
}
int main(){
    int arr[]= {5,6};
    int size = 2;
    inc(arr,size);
    printArray(arr,size);
}