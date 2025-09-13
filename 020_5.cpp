//flipped solid diamond.
/*

***** *****
****   ****
***     ***
**       **
*         *
*         *
**       **
***     ***
****   ****
***** *****

*/

#include<iostream> 
using namespace std; 
int main(){
    int n; 
    cout<<"Enter the value of n:"<<endl; 
    cin>>n;
    for(int row=0;row<n;row=row+1){
        //for initial stars -> half pyramid.
        for(int col=0;col<n-row;col=col+1){
            cout<<"*";
        }
        //for spaces appearing in order secondly.  -> space wala full pyramid
        for(int col=0;col<2*row+1;col=col+1){
            cout<<" ";
        }
        //for stars appearing in the final part of the flipped solid diamond upper portion.
        for(int col=0;col<n-row;col=col+1){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int row=0;row<n;row=row+1){
        //printing stars.
        for(int col=0;col<row+1;col=col+1){
            cout<<"*";
        }
        //printitnig spaces
        for(int col=0;col<2*n-2*row-1;col=col+1){      //for formula check previos question.
            cout<<" ";
        }
        //printing finals stars after spaces.
        for(int col=0;col<row+1;col=col+1){
            cout<<"*";
        }
        cout<<endl;
    }
}