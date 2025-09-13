//Example of Character Arrays with pointers.
#include<iostream>
using namespace std;
int main(){
    char ch = 'k';
    char* cptr = &ch;
    cout<<cptr<<endl;
    return 0;
}

/*Output :
k_

k ke baad garbage value bhi print hoti hai.
*/