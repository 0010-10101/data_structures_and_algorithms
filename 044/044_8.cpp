//Minimum number in an array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arrayone[10]={12,55,78,-96,2,7,109,46,51,32};
    int size = 10;


    //initialize the minimumNumber variable with INT_MIN
    int minimumNumber= INT_MAX;
    for(int i=0;i<size;i++){
        if(arrayone[i]<minimumNumber){
            //found a number greature than minimumNumber, update it.
            minimumNumber=arrayone[i];
        }
    }
    cout<<"Maximum number from the array is: "<<minimumNumber<<endl;
}