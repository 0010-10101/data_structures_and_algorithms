//break and continue keyword


//break example
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         cout<<"Babbar"<<endl;
//         break;
//     }
//     cout<<"Sher"<<endl;
// }


//continue example.
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        if(i==3){
            continue;
        }
        cout<<i<<endl;
    }
}