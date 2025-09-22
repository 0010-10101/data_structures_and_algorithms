// 104_10.cpp


// Agar key exists at more than one place, sabhi key ki index print krni hai.

#include<iostream>
using namespace std;
void checkKey(string& str, int i, int& n, char& key){
    //base case likho.
    if(i>=n){
        //string puri traverse ho gyi, lekin key nhi milli.
        return;
    }
    // ek case solve kro
    if(str[i]==key){
        cout<<"Found at:"<<i<<endl;
    }
    //baki recursion sambhal lega.
    return checkKey(str, i+1, n, key);

}
int main(){
    string str = "sahilthool";
    int n = str.length();
    int i=0;
    char key = 'o';
    checkKey(str, i, n, key);
    return 0;
}

/*Output:

Found at:7
Found at:8
PS I:\DSA with C++\DSA VSCode> 
*/