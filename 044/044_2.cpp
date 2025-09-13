//take 5 elements input in array and print their doubles.
#include<iostream>
using namespace std;
int main(){
    int array_1[500];
    int n;cout<<"Enter how many numbers you want to add in the array."<<endl;cin>>n;
    cout<<"Enter the numbers:"<<endl;
    for(int i=0;i<n;i++){
        cin>>array_1[i];
    }
    cout<<"Doubles values are :"<<endl;
    for(int i=0;i<n;i++){
        cout<< 2 * array_1[i]<<" ";
    }return 0;
}