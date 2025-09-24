//105_2.cpp
//Binary search using recursion.
#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& arr, int s, int e, int key){
    //base case.
    // s>e ho toh ruk jao, key mil jaye toh ruk jao.
    //case 1 -key not found.
    if(s>e){
        //s>e matlab invalid array.
        return -1;
    }
    int mid = (s+e)/2;
    //case 2 - key found.
    if(arr[mid]== key){
        return mid;
    }

    //ek case solve kr do, baki recursion nikal lega.

    //we know that, arr[mid] < key -> search in right side.
    if(arr[mid]<key){
        return binarySearch(arr,mid + 1, e, key);
    }
    // arr[mid] > key -> search in left side. 
    if(arr[mid]>key){
        return binarySearch(arr, s, mid-1, key);
    }
}
int main(){
    vector<int> v{10,20,40,60,70,90,99};
    int target = 99;
    int n = v.size();
    int s = 0, e = n-1;
    int ans = binarySearch(v, s, e, target);
    cout<<"Answer is : "<< ans << endl;
    return 0;
}

/*Output: 
Answer is : 6
PS I:\DSA with C++\DSA VSCode> 
*/

//Note: we can pass s and e in the binarySearch function using pass by reference. 
// it will take some changes 