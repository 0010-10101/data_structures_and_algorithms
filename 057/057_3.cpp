//Last occurence of an element
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int lastOccurence(vector<int> arr, int target){
    int s=0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;
    int ans = -1; // we take this to store ans to find the occurence.
    while(s <= e){
        if(arr[mid] == target){
            //ans store krna hai
            ans = mid;
            //right search
            s= mid + 1;

        }
        else if(target < arr[mid]){
            //search left
            e = mid - 1;
        }
        else if(target > arr[mid]){
            //serach right
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    vector<int> v{1,3,7,7,7,7,7,7,7,7,7,7,7,7,9};
    int target = 7;
    int ans = lastOccurence(v, target);
    cout<<"Last Occurence is at : "<<ans<<endl;
}