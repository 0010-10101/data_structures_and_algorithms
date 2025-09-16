// 104_2.cpp

//Printing an array using recursion 
#include<iostream>
using namespace std;
void print(int arr[], int n, int i){
    //base case likho.
    //jab mera index array ki valid index se bahar nikle jaye to ruk jao
    // valid index 0 to n-1.
    if(i >= n){
        return;
    } 
    // 1 case solve kr diya, 
    cout<<arr[i]<<" ";

    // baki recursion sambhal lega.
    // below preincrement use kiya to proper answer aa rha hai. i+1 se bhi proper answer ata, 
    // print(arr,n,i++)        //but post increment se infinitely chal rha hai. Won't work.
    // print(arr,n,++i)         // ye bhi work karega.
    print(arr,n,i+1);       // i+1 kyu liya ? i pehle hi upar print kr chuke hai.

}
int main(){
    int arr[5] = {10,20,30,40,50};
    int n = 5;
    int i=0;
    print(arr, n,i);
    return 0;
}



/*Output :
10 20 30 40 50 
PS I:\DSA with C++\DSA VSCode> 

*/