//Find function in strings
#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string sentence = "Hello ji kaise ho saare?";
    string target = "ho";
    cout<<"Index yaha se start ho rha hai: "<<sentence.find(target)<<endl;
    if(sentence.find(target)==string::npos){
        cout<<"Not found."<<endl;
    }
    return 0;
}