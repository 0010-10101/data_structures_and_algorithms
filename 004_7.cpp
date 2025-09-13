//generic code
//half pyramid
/*

*
**
***
****
*****

*/


#include<iostream>
using namespace std;
int main(){
    int rowCount;
    cin>>rowCount;
    for(int row=0; row<rowCount ; row=row+1){
        for(int col=0; col<row+1 ; col=col+1){
            cout<<"*";
        }
        cout<<endl;
    }
}