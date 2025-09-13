// Printing the row sum.
//row = 5;cols =4;
#include<iostream>
#include<vector>
using namespace std;
void printRowWiseSum(int arr[][3], int rows, int cols){
    //row wise -> row traversal.
    cout<<"Printing row wise sum."<<endl;
    for(int i=0;i<rows;i++){
        int sum = 0;
        for(int j=0;j<cols;j++){
            sum = sum + arr[i][j];
        }
        cout<< sum << endl;
    }
}
int main() { 
    int arr[3][3];
    int rows = 3; 
    int cols =3; 
    cout<<"Give input values for the given 2D array.: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    //printing 
    cout<<"Printing the values taken as input.: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printRowWiseSum(arr,rows,cols);
}






/*

Give input values for the given 2D array.: 
2 4 6
3 6 9
1 3 5
Printing the values taken as input.: 
2 4 6
3 6 9
1 3 5
Printing row wise sum.
12
18
9

*/