//Character arrays.

#include<iostream>
using namespace std;
int main(){
    char ch[10]= "Sahil";
    char* c = ch;
    cout<<ch<<endl;
    cout<<"--------------"<<endl;
    cout<< &ch << endl;
    cout<<"--------------"<<endl;
    cout<< ch[0] << endl;
    cout<<"--------------"<<endl;
    cout<<&c<<endl;
    cout<<"--------------"<<endl;
    cout<<*c << endl;
    cout<<"--------------"<<endl;
    cout<< c <<endl;
    return 0;
}

/*Output :
Sahil
--------------
0x5ffe96
--------------
S
--------------
0x5ffe88
--------------
S
--------------
Sahil
*/