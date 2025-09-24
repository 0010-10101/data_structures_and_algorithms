// 105_1.cpp
// Given an array to find is sorted or unsorted.
#include<iostream>
#include<vector>
using namespace std;
bool checkSorted(vector<int>& arr, int& n, int i){
    //base case 
    if(i== n-1){
        return true;
    }
    //ek case solve kro.
    if(arr[i+1] < arr[i]){
        return false;
    }
    //baki recursion sambhal lega.
    int answer =  checkSorted(arr,n, i+1);
    return answer;
}
int main(){
    vector<int> v{10,20,30,40,50,60};
    int n =v.size(); 
    int i=0;
    bool isSorted = checkSorted(v,n,i);
    if(isSorted){
        cout<<"Array is sorted."<<endl;
    }
    else{
        cout<<"Array is not sorted."<<endl;
    }

    return 0;
}

/*Output:
Array is sorted.
PS I:\DSA with C++\DSA VSCode> 
*/


/*
For : 
{10,20,90,30,40,50,60};


Output: 

Array is not sorted.
PS I:\DSA with C++\DSA VSCode> 
*/