#include<iostream>
using namespace std;
//printing solid rectangle
int main() { 
    int n,o;
    cout<<"Enter the value of n and o : "<<endl;
    cin >> n >> o;
    for(int i=0;i<n;i++){
        for(int j=0;j<o;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}   