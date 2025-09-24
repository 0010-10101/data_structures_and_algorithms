//105_3.cpp
//Subsequences of a string to store in a vector.
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printSubsequences(string str, string output, int i, vector<string>& v){
    //base case.
    // i jab bahar nikal jay.
    if(i>= str.length()){
        //subsequence ko store kro, aur return kr jao.
        v.push_back(output);
        return;
    }
    //exclude
    printSubsequences(str, output, i+1, v);
    
    //include
    output.push_back(str[i]);

    printSubsequences(str, output, i+1, v);
} 
int main(){
    string str = "abc";
    string output = "";
    int i=0;
    vector<string> v;
    printSubsequences(str,output,i, v);
    cout<<"Printing all the subsequences of a string in the vector. -> "<<endl;
    for(auto val:v){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"Size of vector is: "<<v.size()<<endl;
    return 0;

}
/*
Printing all the subsequences of a string in the vector. -> 
 c b bc a ac ab abc
Size of vector is: 8
PS I:\DSA with C++\DSA VSCode> 
*/
