// 104_9.cpp

// Next,  exact index return kro of the char, nahi mila toh -1 return kro.

// To check whether the given character exists in the string or not.
// kuch elements ko pass by reference send kr skte hai.
#include<iostream>
using namespace std;
int checkKey(string& str, int i, int& n, char& key){
    //base case likho.
    if(i>=n){
        //string puri traverse ho gyi, lekin key nhi milli.
        return -1;
    }
    // ek case solve kro
    if(str[i]==key){
        return i;
    }
    //baki recursion sambhal lega.
    return checkKey(str, i+1, n, key);

}
int main(){
    string str = "sahilthool";
    int n = str.length();
    int i=0;
    char key = 't';
    int ans = checkKey(str, i, n, key);
    cout<<"Answer will give the index of the char it is present on."<<endl;
    cout<<"Answer is :"<<ans<<endl;
    return 0;
}

/*
Output:
 
Answer will give the index of the char it is present on.
Answer is :5
PS I:\DSA with C++\DSA VSCode> 
*/