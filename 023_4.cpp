//set bit 

#include<iostream>
using namespace std;
int main(){
    int n=-2;
    //ans -> store number of set bit
    int ans=0;
    while(n!=0){
        //found one set bit
        //so increment set bit count
        if(n&1){
            cout<<"Got set bit "<<ans<<endl;
            ans++;
        }

        //right shift
        n = n>>1;
    }
    cout<<"Number of set bits "<<ans<<endl;
}