//hollow full pyramid
/*

     *     
    * *
   *   *
  *     *
 *       *
***********

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=0;j<((2*n)-1);j++){
            //first conditions for printing space before the *
            if(j<n-i-1){
                cout<<" ";
            }
            //this condition for printing the * after the initial spaces 
            else if(k<2*i+1){
                if(k==0 || k==2*i || i == n-1)
                    cout<<"*";
                else
                    cout<<" ";
                k++;
            }
            //this condition for printing the final spaces after the * , here no need to give condition , automatically follow till 2n-1.
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}