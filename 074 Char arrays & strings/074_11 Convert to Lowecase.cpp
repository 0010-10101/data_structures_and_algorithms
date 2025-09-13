//Convert string into Lowercase.
//using ascii values.
// example : 'BABBAR' : 'babbar'

//Logic: To convert lower case character into upper case character: 
// do -> -'A'+'a' 
//refer ascii values
#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
int getLength(char name[]){
    int length = 0;         
    int i=0;               
    while(name[i] != '\0'){     
        length++;                   
        i++;                
    }
    return length;
}
void convertIntoLowercase(char arr[]){
    int n = getLength(arr);
    for(int i=0;i<n;i++){
        if(arr[i]>='A' && arr[i]<='Z')
        arr[i]= arr[i]-'A'+'a';
    }
}
int main(){

    char arr[100] = "Sahil";
    cout<<"Length of the array is: " <<getLength(arr)<<endl;
    convertIntoLowercase(arr);
    cout<<"Converted to Lowercase:" << arr[100]<<endl;
    cout<<arr<<endl;
}