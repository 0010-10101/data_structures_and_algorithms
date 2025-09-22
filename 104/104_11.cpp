// 104_11.cpp

//Problem statement : 
// Found at:7
// Found at:8
//jo upar dikh rhe index hai, ye index print nhi krna, store krna hai.
// Solution : inko array / vector mai store kr do.

#include<iostream>
#include<vector>
using namespace std;

//kabhi mai ko data structure pass krta hu function ke andar, 
//jiske andar mai koi data store krna chahta hu
//aur use retain krna chahta hu to mai usko pass by reference krunga.

void checkKey(string str, int i, int n, char key, vector<int>& ans){
    //base case 
    if(i>=n){
        //key not found.
        return;
    }
    //1 case solve krdo.
    if(str[i]==key){
        //below line of code se vector mai store hoga.
        ans.push_back(i);
    }

    return checkKey(str, i+1, n, key, ans);
}

int main(){
    string str = "sahilthool";
    int n = str.length();
    char key = 'o';
    int i=0;
    vector<int> ans;

    checkKey(str, i, n, key, ans);
    cout<<"Printing ans: " <<endl;
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}

/*
Output:

Printing ans: 00
7 8
PS I:\DSA with C++\DSA VSCode> 

*/