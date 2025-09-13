//Erase characters from string.
#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string str = "abcdefghijklmnopqrstuvwzyz";
    str.erase(10,16);           // str.erase(kounse index se delete krna hai, kitne characters delete krna hai);
    cout<<str;
    cout<<endl;
    return 0;
}