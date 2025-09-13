// //Program for row wise.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4][3];
//     int rows = 4;
//     int cols = 3;
    
//     cout<<"Give inputs row wise below: "<<endl;
//     //taking input row wise.
//     for(int i=0;i<4;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }


//     cout<<"Printing the output row wise."<<endl;
//     //printing row wise
//     for(int i=0;i<4;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }




//Program for column wise.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[4][4];
    int rows = 4;
    int cols = 4;

    //taking input column wise.
    cout<<"Enter the inputs for columns wise. "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[j][i];
        }cout<<endl;
    }


    //printing output column wise.
    cout<<"Output is : "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}