//Example of Character array with pointers
#include<iostream>
using namespace std;
int main(){
    char name[10]="SherBano";
    char* cptr = &name[0];
    cout<<name<<endl;
    cout<<"------------------"<<endl;
    cout<<&name<<endl;
    cout<<"------------------"<<endl;
    cout<<*(name+3)<<endl;
    cout<<"------------------"<<endl;
    cout<<cptr<<endl;
    cout<<"------------------"<<endl;
    cout<<&cptr<<endl;
    cout<<"------------------"<<endl;
    cout<<*(cptr+3)<<endl;
    cout<<"------------------"<<endl;
    cout<<cptr+2<<endl;
    cout<<"------------------"<<endl;
    cout<<*cptr<<endl;
    cout<<"------------------"<<endl;
    cout <<cptr+8<<endl;
    cout<<"------------------"<<endl;
    return 0;
}

/*Output:
SherBano
------------------
0x5ffe96
------------------
r
------------------
SherBano
------------------
0x5ffe88
------------------
r
------------------
erBano
------------------
S
------------------

------------------
*/