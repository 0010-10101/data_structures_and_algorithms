//sum of all numbers from 1 to N.
// #include<iostream>
// using namespace std;
// int getSum(int n){
//     int sum = 0;
//     for(int i=1;i<=n;i++){
//         sum = sum + i;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cout<<"Enter value of n:"<<endl;
//     cin>>n;
//     int ans = getSum(n);
//     cout<<"Total Sum up to "<< n <<" is "<< ans << endl;
//     return 0; 
// }






//sum of even numbers upto N.
#include<iostream>
using namespace std;
int getEvenSum(int n){
    int sum=0;
    for(int i=2;i<=n;i=i+2){
        sum = sum + i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int totalSum= getEvenSum(n);
    cout<<"Even sum is: "<<totalSum<<endl;
}