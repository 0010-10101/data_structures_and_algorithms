//Maximum number in an array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arrayone[10]={12,55,78,96,2,7,109,46,51,32};
    int size = 10;


    //initialize the maximumNumber variable with INT_MIN
    int maximumNumber= INT_MIN;
    for(int i=0;i<size;i++){
        if(arrayone[i]>maximumNumber){
            //found a number greature than maximumNumber , update it.
            maximumNumber=arrayone[i];
        }
    }
    cout<<"Maximum number from the array is: "<<maximumNumber<<endl;
}