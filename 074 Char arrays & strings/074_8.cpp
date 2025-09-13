//Replace all spaces.
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
void replaceSpaces(char sentence[]){
    int i=0;
    int n=strlen(sentence);
    for(int i=0;i<n;i++){
        if(sentence[i] == ' '){             
            sentence[i]='@';
        }
    }
}

int main(){
    char sentence[100];
    cin.getline(sentence,100);
    cout<<"Before replacing all spaces: " <<sentence<<endl;
    replaceSpaces(sentence);
    cout<<"After replacing all spaces: "<<sentence<<endl;
    return 0;
}