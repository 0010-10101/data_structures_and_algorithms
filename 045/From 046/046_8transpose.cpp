//Transpose a matrix 
//Transpose means to convert rows into columns and columns into rows


/*Concept : */


#include<iostream>
#include<climits>
#include<vector>
using namespace std;

void transpose(int arr[][3],int r, int c, int transposeArr[][3]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            // swap(arr[i][j],arr[j][i]);
            transposeArr[j][i]=arr[i][j];
        }
    }
}
void Print(int arr[3][3], int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    cout<<"Give inputs : "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Printing array"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Printing array: "<<endl;
    Print(arr,rows,cols);
    int transposeArr[3][3];
    cout<<"Starting transpose."<<endl;
    transpose(arr,rows,cols,transposeArr);
    cout<<"Printing array again."<<endl;
    Print(transposeArr,rows,cols);
    return 0;
}


/* O/P

Give inputs : 
1 2 3
4 5 6
7 8 9
Printing array
1 2 3         
4 5 6         
7 8 9         
Printing array:
1 2 3
4 5 6
7 8 9
Starting transpose.
Printing array again.
1 4 7
2 5 8
3 6 9

*/