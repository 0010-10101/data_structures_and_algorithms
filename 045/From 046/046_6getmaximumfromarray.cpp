//Max/min of 2D array.
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int getMax(int arr[][3], int rows, int cols ){
    int maxi = INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>maxi){
                maxi = arr[i][j];
            }
        }
    }
    // cout<<"Maximum number from the element is "<<maxi<<endl;
    return maxi;
    
}
int main(){
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    cout<<"Enter input values: "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Printing i/p values taken from user. "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Maximum Number : "<<getMax(arr,rows,cols);
    return 0;
}