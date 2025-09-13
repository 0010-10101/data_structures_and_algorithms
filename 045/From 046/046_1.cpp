//  Program 1 : Left rotate an array by 1 element.
//  Program 2 : Majority Element in an Array.
//  Program 3 : Buy and Sell Stock. Level 1

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[3][3];

    int brr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    // cout<<brr[1][2];


    //for every row, we need to print value in each column
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"----------------------------"<<endl;
    //for printing columns wise
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[j][i]<<" ";
        }cout<<endl;   
    }
    // cout<<"Array created successfully."<<endl;
}