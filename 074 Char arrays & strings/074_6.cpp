//Length of string.
//String ki length nikalni hai ? kaise nikalenge ?

#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
int getLength(char name[]){
    int length = 0;         //starting mai length zero thi
    int i=0;                // i kyu liya , iterate krne ke liye start se leke null character tak ke liye.
    while(name[i] != '\0'){     //jabtak null character na mile , count karo.
        length++;                   // length ko increment kro
        i++;                    // character ko aage badhao.
    }
    return length;
}
int main(){
    char name[100];
    cin>>name;
    
    cout<<"Length is: " <<getLength(name)<<endl;

    // predefined function use kr rhe hai.
    cout<<"Length is: " << strlen(name)<<endl;

    return 0;
}