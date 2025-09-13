//Numeric palindrome equilateral pyramid.
/*

        1
       121
      12321
     1234321
    123454321
   12345654321
  1234567654321
 123456787654321
12345678987654321

*/
#include<iostream>
using namespace std;
int main(){
    int n;cout<<"Enter the value of n:"<<endl;cin>>n;
    int k=n;
    for(int i=0;i<n;i++){
        int c=1;
        for(int j=0;j<k;j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else if(j<=n-1){
                cout<<c;
                c++;
            }
            else if(j == n){
                c=c-2;
                cout<<c;
                c--;
            }
            else{
                cout<<c;
                c--;
            }
        }
        k++;
        cout<<endl;
    }
}