//Convert string into uppercase.
//using ascii values.
// do -> -'a'+'A' 

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
void convertIntoUppercase(char arr[]){
    int n = getLength(arr);
    for(int i=0;i<n;i++){
        if(arr[i]>='a' && arr[i]<='z'){
            arr[i]= arr[i]-'a'+'A';
        }
    }
}
int main(){

    char arr[100] = "Sahil";
    cout<<"Length of the array is: " <<getLength(arr)<<endl;
    convertIntoUppercase(arr);
    cout<<"Converted to Uppercase:" << arr[100]<<endl;
    cout<<arr<<endl;
}