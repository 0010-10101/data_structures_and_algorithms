//105_3.cpp
//Subsequences of a string.
#include<iostream>
#include<string>
using namespace std;
void printSubsequences(string str, string output, int i){
    //base case.
    // i jab bahar nikal jay.
    if(i>= str.length()){
        //subsequence ko print kro, aur return kr jao.
        cout<< output << endl;
        return;
    }
    //exclude
    printSubsequences(str, output, i+1);
    
    //include
    //output wali string mai current charcter ko include kro.
    // below lines is responsible for concatenation of output string
    //and ith character of str string.
    output.push_back(str[i]);

    // upar wale line ki jagah ye use kr skte hai ->> output = output + str[i];


    printSubsequences(str, output, i+1);
} 
int main(){
    string str = "abc";
    string output = "";
    int i=0;
    cout<<"All the subsequences of a string are: "<<endl;
    printSubsequences(str,output,i);

    return 0;

}

/*
All the subsequences of a string are: 

c
b
bc
a
ac
ab
abc
PS I:\DSA with C++\DSA VSCode> 
*/