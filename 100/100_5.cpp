//Practicing Pointers.
#include<iostream>
using namespace std;
int main(){
    int a=7;
    int* c = &a;
    c=c+1;
    cout<<a<<" "<<*c<<endl;
}
/*Output:
Below the 6291096 is a random value or called garbage value.

7 6291096
PS I:\DSA with C++\DSA VSCode> 

*/