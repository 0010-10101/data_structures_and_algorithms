//SOLUTION BY LAKSHAY
//full pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int k=0;
//         for(int j=0;j<2*n-1;j++){
//             if(j<n-i-1){
//                 cout<<" ";
//             }
//             else if(k<2*i+1){
//                 cout<<"*";
//                 k++;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }






/*

     * 
    * *
   * * *
  * * * *
 * * * * *
* * * * * *

*/
#include<iostream>
using namespace std;
int main(){
    int n; cout<<"Enter the value of n:" << endl; cin>> n;
    for(int row=0;row<n;row=row+1){
        //spaces
        for(int col=0;col<n-row-1;col=col+1){
            cout<<" ";
        }
        //stars
        for(int col=0;col<row+1;col=col+1){
            cout<<"* ";
        }
        cout<<endl;
    }
}