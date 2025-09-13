//Max/min of 2D array.
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int getMinimum(int arr[][3], int rows, int cols ){
    int mini = INT_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]<mini){
                mini = arr[i][j];
            }
        }
    }
    // cout<<"Minimum number from the element is "<<mini<<endl; 
    return mini;
    
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
    cout<<"Minimum Number: "<<getMinimum(arr,rows,cols);
    return 0;
}





/*Enter input values: 
91 92 93
94 95 96 
1 2 3
Printing i/p values taken from user. 
91 92 93 
94 95 96 
1 2 3 
Minimum number from the element is 1
1
*/