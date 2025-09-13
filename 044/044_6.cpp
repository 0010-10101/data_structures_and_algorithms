//count 0's and 1's in array.
#include<iostream>
using namespace std;

int main(){
    int arr[]={0,0,0,1,1,0,1,0,0,1,1,0,0,1,0};
    int size=15;

    int numberofZeroes = 0; // initially number of zeroes , zero hoga.
    int numberofOnes = 0; //initially number of ones , zero hoga kyunki count nhi kiya starting mai.
    
    for(int i=0;i<size;i++){
        //if 0 found increment
        if(arr[i]==0){
            numberofZeroes++;
        }
        //if 1 found increment
        if(arr[i]==1){
            numberofOnes++;
        }
    }

    cout<<"Number of zeroes: "<<numberofZeroes<<endl;
    cout<<"Number of ones: "<<numberofOnes<<endl;
}