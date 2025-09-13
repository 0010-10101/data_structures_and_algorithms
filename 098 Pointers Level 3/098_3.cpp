// //Understanding double pointers
// // Implementation
// #include<iostream>
// using namespace std;
// void util(int* p){
//     *p = *p + 1;
// }
// int main(){
//     int a = 5;
//     int* p = &a;

//     cout<<"Before"<<endl;
//     cout<<a<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;

//     util(p);

//     cout<<"After"<<endl;
//     cout<<a<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;

//     return 0;
// }



#include<iostream>
using namespace std;
void util(int* p){
    *p = *p + 1;
}
int main(){
    int a=8;
    int* p=&a;
    cout<<"before"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;


    util(p);

    cout<<"after"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    return 0;
}