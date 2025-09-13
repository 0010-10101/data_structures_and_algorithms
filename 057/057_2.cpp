//Finding first occurence of an element.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int firstOccurence(vector<int> arr, int target){
    int s=0;
    int e= arr.size()-1;
    int mid = s + (e-s) / 2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == target){
            //store answer 
            ans = mid;
            //left search
            e = mid - 1;
        }
        else if(target < arr[mid]){
            e = mid - 1;
        }
        else if(target > arr[mid]){
            //left search 
            s = mid + 1;
        }
        mid = s + (e-s)/ 2;
    }
    return ans;
}
int main(){
    vector<int> v{1,3,3,3,3,4,4,4,4,6,7};
    int target = 4;
    int ans = firstOccurence(v,target);
    cout<<"ans is "<<ans<<endl;
}

//Binary Search complexity is = O(log n).