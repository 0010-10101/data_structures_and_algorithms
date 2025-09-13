#include<iostream>
using namespace std;
int main(){
    int arr[4]={12,14,16,18};
    cout<<"Base address ie. address of the first index." << arr<<endl;
    cout<<"value at index 0:" <<arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;

    cout<<"--------------------"<<endl;

    int* p = arr;
    cout<<p<<endl;
    cout<<&p<<endl;

    return 0;
}


/*We get a catch if we are talking about array, the variable which is representing the array whether we print it or print its address in both case we get the base address*/