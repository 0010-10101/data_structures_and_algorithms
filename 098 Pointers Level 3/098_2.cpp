//Understanding double pointers
#include<iostream>
using namespace std;


//below no change will take place in printed statements because we have used by value.
void util(int* p){              // pass by value.
    p = p + 1;
}
int main(){
    int a = 5;
    int* p = &a;

    cout<<"Before"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    
    util(p);
    
    cout<<"After"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;

    return 0;
}

/*

Before
5       
0x5ffe94
5       
After   
5       
0x5ffe94
5       
PS I:\DSA with C++\DSA VSCode> 

Output shows no change in before and after passing the function because we have passed by value.

*/