//Printing Sum Column Wise
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void printSumColumnWise(int arr[][3], int rows, int cols){
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            sum = sum + arr[j][i];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    cout<<"Accepting the input values from the user below : "<<endl;
    //accepting the values from the user.
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }


    cout<<"Printing the values provided by the user below : "<<endl;
    //printing the accepted values from the user.
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printSumColumnWise(arr,rows,cols);

    return 0;
}


/*

Accepting the input values from the user below : 
1 2 3
4 5 6
7 8 9
Printing the values provided by the user below : 
1 2 3 
4 5 6 
7 8 9 
12
15
18


*/