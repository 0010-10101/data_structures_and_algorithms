//fancy pattern #1
/*

********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****



n=5, row=5, col=17
*/
#include<iostream>
#include"assert.h"
using namespace std;
int main(){
    int n;cout<<"Enter the value of n:"<<endl; cin>>n;
    assert(n<=9);
    if(n>9){
        cout<<"pattern will be invalid , please put value <=9."<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        int start_num_index = 8 -i;
        int num = i+1;
        int count_num = num;
        for(int j=0;j<17;j++){
            if(j==start_num_index && count_num>0){
                cout<<num;
                start_num_index+=2;
                count_num--;
            }
            else{
                cout<<"*";
            }
        }cout<<endl;
    }
}
