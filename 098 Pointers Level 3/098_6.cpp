//Reference variables concept 2

//Here using pass by value concept.
#include<iostream>
using namespace std;
void subfunction(int a){
    a++;
}
int main(){
    int a=5;
    subfunction(a);
    cout<<a<<endl;
    return 0;
}
/*
Output:
5 

here answer comes 5 because its pass by value, a copy is created.

*/