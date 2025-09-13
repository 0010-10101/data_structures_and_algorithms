//Selection Sort
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> arr {5,4,3,2,1,8,6,9,10,7};
    // running loops for blocks.
    int n=arr.size();

    // outer loop -> n-1 rounds show krta hai
    for(int i=0;i<n-1;i++){     // using n-1 , because humne last index ke liye minimum find nhi kiya
        int minimumIndex = i;
        //inner loop -> index of  Minimum element from i to n. 
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minimumIndex]){
                //new minimum, then store.
                minimumIndex = j;
            }
        }
        //after finding out swap karo.
        swap(arr[i],arr[minimumIndex]);
    }

    //Printing 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}


/*

kabhi 1,2,3,4...n ka summation karna ho
toh ->
we use
n * (n+1)/2 

*/

/*Time complexity for Selection sort is O(n^2)
reason -> 2 loops hai and 

n*(n-1)/2; on simplifying we get (n^2 - n ) /2 ;

We can neglect constant and lower degree's of expression.


Space Complexity :
O(1) , constant we have used memory for 3 variables....
we only consider memory for allocating variables not inputs.
*/