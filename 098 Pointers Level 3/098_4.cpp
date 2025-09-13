//Double Pointers, next concept
// #include<iostream>
// using namespace std;
// void solve(int** ptr){
//     ptr = ptr+1;

// }
// int main(){
//     int x=12;
//     int* p = &x;
//     int** q = &p;
//     solve(q);
//     cout<<x<<endl;
//     return 0;
// }
/*
12
PS I:\DSA with C++\DSA VSCode> 
*/




//----------------------------------------------------

// #include<iostream>
// using namespace std;
// void solve(int** ptr){
//     *ptr = *ptr+1;
// }
// int main(){
//     int x=12;
//     int*p =&x;
//     int**q = &p;
//     solve(q);
//     cout<<x<<endl;
//     return 0;
// }
/*
12
PS I:\DSA with C++\DSA VSCode> 
*/



//----------------------------------------------------------
#include<iostream>
using namespace std;
void solve(int** ptr){
    **ptr = **ptr + 1;
}
int main(){
    int x=12;
    int*p = &x;
    int**q = &p;
    solve(q);
    cout<<x<<endl;
    return 0;
}
/*
13
PS I:\DSA with C++\DSA VSCode> 
*/

/*
Sometimes understanding pointes can become very difficult so new thing was introduced called
 as reference variable

Reference variable - is calling the same memory location with different names.
In reference variable no copy is created, same memory is shown.
*/