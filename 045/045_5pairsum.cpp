//Pair Sum
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{10,20,40,60,70};
    int sum = 80;

    //printing all pairs 
    //outer loop will traverse for each element
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        //for every element , we will traverse on aage wale elements.
        for(int j=i+1;j<arr.size();j++){
            // cout<<"("<<element << "," << arr[j] <<")"<<endl;
            if(element + arr[j]== sum){
                cout<<"Pair found : " << "( " << element << "," << arr[j]<<" ) = " << sum << endl;
            }
        }
    }
}







/*
(10,20)
(10,40)
(10,60)
(10,70)
(20,40)
(20,60)
(20,70)
(40,60)
(40,70)
(60,70)
*/