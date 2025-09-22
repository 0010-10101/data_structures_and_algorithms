// //104_13.cpp
 
// // input mai - 647
// // need to print all digits of the number in output using recursion.

// #include<iostream>
// using namespace std;
// void printDigits(int n){
//     //base case
//     if( n == 0){
//         return;
//     }

//     //ek case mai solve karunga.
//     int digit = n % 10;
//     cout<<digit<<" "; 

//     //baki recursion sambhal lega.
//     printDigits(n/10);

// }
// int main(){
//     int n = 647;
//     printDigits(n);
//     return 0;
// }
// /*
// Output:

// 7 4 6 
// PS I:\DSA with C++\DSA VSCode>
// */





















//104_13.cpp
 
// input mai - 647
// need to print all digits of the number in output using recursion.

#include<iostream>
using namespace std;
void printDigits(int n){
    //base case
    if( n == 0){
        return;
    }
    
    //baki recursion sambhal lega.

    printDigits(n/10);


    //ek case mai solve karunga.
    int digit = n % 10;
    cout<<digit<<" "; 

}
int main(){
    int n = 647;
    if(n==0){
        cout<<"0"<<endl;
    }
    printDigits(n);
    return 0;
}
/*
Output:

6 4 7 
PS I:\DSA with C++\DSA VSCode>
*/