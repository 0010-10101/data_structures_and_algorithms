//Numeric Full Pyramid
/*

    1    
   232   
  34543  
 4567654 
567898765

*/

//another method
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:"<<endl;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row+1;col++){
//             cout<<col+row+1<<" ";
//         }
//         cout<<endl;
//     }
// }


//second method
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:"<<endl;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         int start = row + 1;
//         for(int col=0;col<row+1;col++){
//             cout<<start<<" ";
//             start=start+1;
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int n; cout<<"Enter value of n:"<<endl; cin>>n;
    for(int row=0;row<n;row=row+1){
        //spaces
        for(int col=0;col<n-row-1;col=col+1){
            cout<<" ";
        }
        //numbers
        int start1 = row + 1;
        for(int col=0;col<row+1;col=col+1){
            cout<<start1;
            start1 = start1 + 1;
        }
        //reverse counting
        int count= 2*row;
        for(int col=0;col<row;col=col+1){
            cout<<count;
            count--;
        }
        cout<<endl;
    }
}