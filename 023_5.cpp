//convert kilometers to miles.

// 1mile = 1.6km
//1km = 0.61 kms.

#include<iostream>
using namespace std;
int main(){
    int km;
    cout<<"Enter the value in km:"<<endl;
    cin>>km;

    cout<<"Value in miles is:"<< (1/1.609)*km<<endl;
}