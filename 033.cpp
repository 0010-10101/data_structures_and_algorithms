//pascal traingle pattern
//how to find a particular value : 
//formula for binomial coefficient in pascal triangle : 
// c = c*(i-j)/j;
//here i varies from 1 to N; i=[1,N],
//j varies from 1 to i; j=[1,i]
/*

1       
1 1     
1 2 1   
1 3 3 1 
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1


*/

#include<iostream>
using namespace std;
int main(){
    int n;cout<<"Enter the value of n:"<<endl;cin>>n;
    for(int i=1;i<=n;i++){
        int C = 1;
        for(int j=1;j<=i;j++){
            cout<<C<<" ";
            C = C * ( i-j )/j;
        }
        cout<<endl;
    }
}