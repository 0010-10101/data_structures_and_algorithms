//creating a pointer

#include<iostream>
using namespace std;
int main(){
    int a = 5;

    //pointer create krna hai.

    int* ptr = &a;
    //pointer ke andar hamesha address store karte hai.



    //access the value ptr is pointing to.
    //we use dereferencing opeartor.
    cout<< *ptr << endl;

    cout<<ptr<<endl;        // ye addres deta hai.
}