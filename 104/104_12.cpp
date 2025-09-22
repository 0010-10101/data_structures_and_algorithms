//104_12.cpp

// Counting the occurenece of the key(character given by user) in a string using recursion.

#include<iostream>
using namespace std;
void checkKey( string& str, int i, int& n, int key, int& count){// count ko pass by reference krna compulsory
    // reason : count ke andar answer ko store krna hai.


    //base case 
    if(i>=n){
        return;
    }
    //1 case solve kr do.
    if(str[i] == key){
        count++;
    }
    //baki recursion sambhal lega.
    checkKey(str, i+1, n, key, count);

}
int main(){
    string str = "sahilthool";
    int n = str.length();
    int i=0;
    char key = 'o';
    int count = 0;
    checkKey(str, i, n, key, count);
    cout<<"Count is : "<<count <<endl;
    return 0;
}


/*
Output:

Count is : 2
PS I:\DSA with C++\DSA VSCode> 

*/