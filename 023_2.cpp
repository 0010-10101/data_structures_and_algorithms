// //soving using while loop
// #include<iostream>
// using namespace std;
// int main(){
//     int n=528;
//     while(n!=0){
//         int rem= n%10;
//         cout<<rem<<" ";
//         n=n/10;
//     }
//     cout<<endl;
// }





//solving using for loop
#include<iostream>
using namespace std;
int main(){
    int n=528;
    for(;n!=0;n=n/10){
        int rem=n%10;
        cout<<rem<<" ";
    }
    cout<<endl;
    return 0;
}