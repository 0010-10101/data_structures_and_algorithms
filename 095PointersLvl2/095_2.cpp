// Arrays and pointers
#include<iostream>
using namespace std;
int main(){
    int arr[4] = {22,44,66,88};
    cout<<*arr<<endl;
    cout<<*arr + 1 <<endl;
    cout<<*(arr) + 1 <<endl;
    cout<<*(arr+1)<<endl;
    cout<<arr[1]<<endl;
    cout<<*(arr+2)<<endl;
    cout<<arr[2]<<endl;
    cout<<*(arr+3)<<endl;
    cout<<arr[3]<<endl;

    cout<<"-------------------"<<endl;


    cout<<2[arr]<<endl;
    return 0;
}