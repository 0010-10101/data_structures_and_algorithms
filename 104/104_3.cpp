//104_3.cpp
// printing array with using recrusion , but without using index.
#include<iostream>
using namespace std;
void print(int arr[], int n){
    //base case.
    if(n==0){
        return;
    }
    cout<<arr[0]<<" ";
    print(arr+1,n-1);
}
int main(){
    int arr[5] = {10,20,30,40,50};
    int n=5;
    print(arr,n);
    return 0;
}

/*Output:
10 20 30 40 50
PS I:\DSA with C++\DSA VSCode>

*/
