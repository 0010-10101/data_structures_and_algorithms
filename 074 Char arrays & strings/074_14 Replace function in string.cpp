//Replace function in string.
//This function has different types of syntax , refer to cplusplus.com
#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string str1= "This is my first message.";
    string str2 = "Last";

    // str1.replace(11,5,str2);     //str1.replace(index of the word, size of the word, "Replacing word.")
    str1.replace(11,5,"Final");
    cout<<str1;
    return 0;
}