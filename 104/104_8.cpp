// 104_8.cpp
// To check whether the given character exists in the string or not.
// kuch elements ko pass by reference send kr skte hai.
#include<iostream>
using namespace std;
bool checkKey(string& str, int i, int& n, char& key){
    //base case likho.
    if(i>=n){
        //string puri traverse ho gyi, lekin key nhi milli.
        return false;
    }
    // ek case solve kro
    if(str[i]==key){
        return true;
    }
    //baki recursion sambhal lega.
    return checkKey(str, i+1, n, key);

}
int main(){
    string str = "sahilthool";
    int n = str.length();
    int i=0;
    char key = 't';
    bool ans = checkKey(str, i, n, key);
    cout<<"If we get 1 in answer it means:- The key is present in the string"<<endl;
    cout<<"If we get 0 in answer it means:- The key is absent in the string"<<endl;
    cout<<"Answer is :"<<ans<<endl;
    return 0;
}

/*
Output:

If we get 1 in answer it means:- The key is present in the string
If we get 0 in answer it means:- The key is absent in the string
Answer is :1
PS I:\DSA with C++\DSA VSCode> 

*/