// 104_7.cpp
// find Minimum element from the array using recursion.
// solved using pass by reference.

#include<algorithm>
#include<iostream>
#include<climits>
using namespace std;
void findMinimum(int arr[], int n, int i, int& mini){
    //base case
    if(i>=n){
        return;
    }
    //ek case solve kro
    mini = min(mini,arr[i]);
    //baki recursion sambhal lega.
    findMinimum(arr, n, i+1, mini);
}
int main(){
    int arr[]={33,10,20,30,44,55,5,89};
    int n= 8;
    int i=0;
    int mini = INT_MAX;

    findMinimum(arr, n, i, mini);
    cout<<"Minimum element from the array is:"<<mini <<endl;
    return 0;
}

/*Output :

Minimum element from the array is:5
PS I:\DSA with C++\DSA VSCode>
*/