//solid half diamond

/*

*
**
***
****
*****
****
***
**
*

*/


//solution 1
//i zero se n tak jayega
// j zero to 4 tak jayega , in this case n=5
// #include<iostream>
// using namespace std;
// int main(){
//     int n;cout<<"Enter value of n: "<<endl; cin>>n;
//     for(int i=0;i<2*n-1;i++){
//         int cond=0;
//         if(i<n){//growing condition
//             cond=i;
//         }
//         else{//shrinking phase of diamond
//             cond= n - (i%n) - 2;
//         }
//         for(int j=0;j<=cond;j++)
//         {
//             cout<<"*";
//         }cout<<endl;
//     }
// }





//solution 2
#include<iostream>
using namespace std;
int main(){
    int n;cout<<"Enter value of n: "<<endl; cin>>n;
    for(int i=0;i<2*n-1;i++){
        // int cond=0;
        // if(i<n){//growing condition
        //     cond=i;
        // }
        // else{//shrinking phase of diamond
        //     cond= n - (i%n) - 2;
        // }
        int cond = i < n ? i : n - (i%n) - 2;           //ternary operator.
        for(int j=0;j<=cond;j++)
        {
            cout<<"*";
        }cout<<endl;
    }
}