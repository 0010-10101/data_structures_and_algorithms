#include<iostream>
using namespace std;
void solve(int arr[]){
    cout<<"Size inside the solve function. :- "<<sizeof(arr)<<endl;
    // kisi function mai array ko pass kiya toh by default pass by reference hota hai.
    // is case mai array pass nahi hua, pointer pass hua hai.
}
int main(){
    int arr[10] = {1,2,3,4};
    cout<<"Inside the main function. :- "<<sizeof(arr) <<endl;

    //printing array inside the main function.
    for(int i=0;i<10;i++){
        cout<< arr[i] <<  " ";
    }
    cout<<endl;
    cout<<"Now calling solve function"<<endl;
    solve(arr);

    return 0;
}