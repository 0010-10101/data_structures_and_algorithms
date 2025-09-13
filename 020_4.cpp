//hollow diamond
/*

     *     
   *   *
  *     *
 *       *
*         *
*         *
 *       *
  *     *
   *   *
    * *
     *

*/
#include<iostream>
using namespace std;
int main(){
    int n; cout<<"Enter the value of n: "<<endl; cin>>n;
    //hollow diamond
    for(int row=0;row<n;row=row+1){
        //spaces
        for(int col=0;col<n-row-1; col=col+1){
            cout<<" ";
        }
        //stars
        for(int col=0;col<2*row+1;col=col+1){
            //if first character or if last character.
            if(col == 0 || col == 2*row){
                //for first character or last character.
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }


    for(int row=0;row<n;row=row+1){
        //printing spaces firstly
        for(int col=0;col<row;col=col+1){
            cout<<" ";
        }
        //printing stars secondly.                  //remember formula extracted from previous and new made calculations 2*n-2*row-1
        for(int col=0;col<2*n-2*row-1;col=col+1){
            //if first or last character.
            if(col==0 || col==2*n-2*row-2){           //here formula is derived from above formula. ie. [2*n-2*row-1]-1
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}