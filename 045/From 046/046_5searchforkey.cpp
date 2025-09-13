#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;  
}

int main(){

    int arr[3][3];
    int rows = 3;
    int cols = 3;
    int key = 8;
    cout<<"Enter the values of the 2D arrayl. " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Printing the values of array provided by the user. "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    if(findKey(arr,3,3,key)){
        cout<< "True" <<endl;
    }
    else{
        cout<<"False" <<endl;
    }
}