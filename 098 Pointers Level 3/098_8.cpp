//Earlier we used to passing by making pointer.

//Below we are passing address of a
// we will store the address inside the pointer.
#include<iostream>
using namespace std;
void solve(int* value){
    *value = *value + 1;
}
int main(){
    int a=12;
    solve(&a);
    cout<<a<<endl;
    return 0;
}
/*13
PS I:\DSA with C++\DSA VSCode> 

*/

