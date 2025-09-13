//find max of 3 numbers
#include<iostream>
using namespace std;
int findMaxNum(int x, int y, int z){
    if(x>y && x>z){
        return x;
    }
    else if(y>x && y>z){
        return y;
    }
    else{
        return z;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter the value of a,b and c:"<<endl;
    cin>>a>>b>>c;
    int maxiumnumber = findMaxNum(a,b,c);
    cout<<"Greatest among the three numbers is :"<< maxiumnumber<<endl;
}