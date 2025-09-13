// Using getline function.
#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    char arr[100];
    
    // Niche ka syntax kaam kyu nhi kr rha?
    // getline(cin,arr);
    
    cin.getline(arr,50);
    // arr wale array ke andar input lena hai & max length 50 hoga.
    //cin.getline() ke andar delimeter set kr skte hai.
    //delimeter ? space , tab aur newline in tino characters pe aap input lene bandh kr dete ho cin () ke andar.
    // cin.getline(arr, max length, delimeter) -> aisa syntax hota hai

    cout<<arr;

    return 0;
}