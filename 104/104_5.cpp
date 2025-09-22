//104_5.cpp
// Find maximum element in the array using recursion.


// below code is using loops , not recursion.
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int maxi = INT_MIN;
    int n = 5;
    int arr[5] = {10,80,30,40,50};
    for(int i=0;i<n;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    cout<<maxi<<endl;
    return 0;
}

/*
Output : 

80
PS I:\DSA with C++\DSA VSCode> 
*/