//Insertion sort
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{10,1,7,6,14,9};
    int n = arr.size();

    //outer loop for round.
    for(int round = 1; round < n ; round ++){
        //Step A fetch 
        int value = arr[round];
        //step 2 Compare karo ,comparison pichle elements ke sath krna pdta hai. so compare with i-1, i-2....0 the element tak.
        int j=round-1;
        for(;j>=0;j--){
            if(arr[j]>value){
                //step 3 shift.
                arr[j+1] = arr[j];
            }
            else{
                //rukna hai.
                break;
            }
        }
        //Step 4 copying.
        arr[j+1] = value;
    }
    //printing 
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
    return 0;
}