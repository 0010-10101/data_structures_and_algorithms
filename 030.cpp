//fancy pattern #2
//patten made for n=4;
/*

1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    int c=1;
    cout<<"Enter the value of n:"<<endl;cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<c;
            c++;
            if(j<i){
                cout<<"*";
            }
        }cout<<endl;
    }
    //here at this point c ki value 11 thi.
    //for shrinking phase
    int start=c-n;
    for(int i=0;i<n;i++){
        int k=start;
        for(int j=0;j<=n-i-1;j++){
            cout<<k;
            k++;
            if(j<n-i-1){
                cout<<"*";
            }
        }
        start=start-(n-i-1);
        cout<<endl;
    }
}