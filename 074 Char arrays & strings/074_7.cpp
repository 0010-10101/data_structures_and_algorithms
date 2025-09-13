//Reverse a string.
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
void reverseChararray(char name[]){
    int i=0;
    int n = getLength(name);
    int j=n-1;
    for(;i<=j;){              //jabtak i chota ya equal ho j ke tabtak loop chalao, bada ho jaye to ruk jao.
        swap(name[i],name[j]);
        i++;
        j--;
    }
}
int main(){
    char name[100];
    cin>>name;
    cout<<"Length of the array is: " <<getLength(name)<<endl;
    cout<<"Initially the array is: "<<name<<endl;
    reverseChararray(name);
    cout<<"After reversing the array: "<<name<<endl;
    return 0;
}