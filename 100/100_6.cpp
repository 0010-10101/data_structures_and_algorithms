#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,5,6,7};
    int* p = (arr+1);
    cout<<*arr + 9;
    return 0;   
}

// Yaha dereferencing concept apply hoga *arr = 4 
// Therefore, 4+9 = 13;

/*Output :

13
PS I:\DSA with C++\DSA VSCode> 

*/