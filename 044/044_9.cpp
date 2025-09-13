// //print extremes of the array.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40,50,60,70,80};


//     //size is even.
//     int size = 8;
    
//     int start = 0;
//     int end = size-1;

//     while(true){
//         if(start>end){
//             break;
//         }
//         cout<<arr[start]<<" ";
//         cout<<arr[end]<<" ";
//         start++;
//         end--;
//     }

// }



//Example For odd size 
//print extremes of the array.
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70};


    //size is odd.
    int size = 7;
    
    int start = 0;
    int end = size-1;

    while(start<=end){
        if(start==end){
            cout<<arr[start];
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
            start++;
            end--;
        
    }

}