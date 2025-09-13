//Find the odd occuring element in an array.
//Given an array where all numbers occuring even number of times except 1.
//all repeating occurence of element , appears in pairs.
//Pairs are not adjacent.

// Example  - {1,1,2,2,3,3,4,4,3,600,600,4,4};
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solve(vector<int> arr){
    int s = 0;
    int e= arr.size()-1;
    int mid = s + (e - s )/2;
    while(s<=e){
        if(s==e){
            //case of single element in array 
            return s;
        }
        //2 cases -> mid- even hoga  or mid - odd hoga.
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                e = mid;
            }
        }
        else{
            if(arr[mid]== arr[mid-1]){
                s = mid + 1;
            }
            else{
                e= mid - 1;
            }
        }
        mid = s + ( e - s)/2;
    }
    return -1;
}
int main(){
    vector<int> arr{-1,-1,2,2,3,3,7,4,4,3,3,600,600,4,4};
    int ans = solve(arr);
    cout<<"index is " << ans << endl;
    cout<<"value is " << arr[ans] << endl;
    return 0;
}