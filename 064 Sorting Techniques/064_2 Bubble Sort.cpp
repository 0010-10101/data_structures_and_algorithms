//Bubble Sort
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{10,1,7,6,14,9};
    int n = arr.size();
    //Note : Rounds kitne chalenge ? 
    //Ans :-> n -1 rounds chalenge

    // first loop for rounds.
    for(int round = 1; round < n ; round ++ ){            // agar round 0 se shuru kiya, toh round < n - 1 krna pada , and second loop mai bhi j<=n-round - 1 -1 .  
        bool swapped = false;       // nothing is swapped in starting so keep false.           
        
        // second loop comparison ke liye.
        
        
        //round1 ke liye j kounse index tak gaya, (14) i.e index 4 tak.
        //round 2 ke liye j, index 3 tak.
        //round 3 ke liye j, index 2 tak gaya.
        //round 4 ke liye j, index 1 tak gaya.
        //round 5 ke liye j, index 0 tak gaya.     
        //In this case, n ki value 6 hai.
        //We get formula n - round - 1 
        for(int j=0 ; j<n - round;j++){// agar -1 kr rhe ho toh j<=n-round-1; if not doing -1 then use j<n-round
            

            // here do comparison , j and j + 1 wala element.
            if(arr[j]>arr[j+1]){

                swapped = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped == false){
            // sort ho chuka hai, no need to check in further rounds.
            break;
        }
    }
    //printing.
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

/*
T.C = O(n^2)

Agar swapping nhi ho rhi hai ... in this case round 3 ke baad nhi hua hai.
array sorted pada hai ; 
toh
aisa code likho jisse loop se bahar nikle jaye.

O(n^2) ki jagah O(n) mai leke aa sakte hai.

Hence, bubble sort is optimized.


Example {1,2,3,4,5} here, O(n) , Time complexity sirf already sorted array ke case mai hogi(Ye best case scenario hai.), 
reason kyuki comparison karne ke baad koi bhi swap nhi hoga.

In rest of the cases T.C = O(n^2).

//worst case : Ex. {5,4,3,2,1} for sorting in ascending order.Ye case mai
here comparison mai swapping hogi, har ek round mai. T.C= O(n^2).


Space Complexity : O(1), reason 4 variables declare kiya hai but constant hai.

*/