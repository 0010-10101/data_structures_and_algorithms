//Creating a reference variable.
// In general terms. Same memory location but has different names.
#include<iostream>
using namespace std;

int main(){
    int a=5;
    //creating a reference variable.
    int& b = a;
    cout<<"1st time."<<a<<endl;
    cout<<b<<endl;
    a++;
    cout<<"2nd time"<<a<<endl;

    cout<<b<<endl;
    return 0;
}
/*
Output : 
1st time.5
5
2nd time6
6
PS I:\DSA with C++\DSA VSCode> 
*/