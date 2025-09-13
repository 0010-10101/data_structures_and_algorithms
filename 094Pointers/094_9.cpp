#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* p = &a;
    int* q = p;
    int* r = q;


    cout<<"1-> "<<a<<endl;  //10
    cout<<"2-> "<<&a<<endl; //address of a
    cout<<"3-> "<<p<<endl;  //address of a 
    cout<<"4-> "<<&p<<endl; //address of p
    cout<<"5-> "<<*p<<endl; //10
    cout<<"6-> "<<q<<endl;  //address of a 
    cout<<"7-> "<<&q<<endl; //address of q
    cout<<"8-> "<<*q<<endl; //10
    cout<<"9-> "<<r<<endl;  //address of a
    cout<<"10-> "<<&r<<endl; //address of r
    cout<<"11-> "<<*r<<endl; //10
    cout<<"12-> "<<(*p + *q + *r)<<endl; //30
    cout<<"13-> "<< (*p)*2 + (*r)*3 << endl;  //50
    cout<<"14-> "<<(*p/2) - (*q)/2 << endl;  //0
}