//reverse an array.


//for even number of elements
#include<iostream>
using namespace std;
int main(){
    int arr[8]={10,20,30,40,50,60,70,80};
    int size=8;

    int start=0;
    int end=size-1;

    while(start<=end){
        //step 1 swap
        swap(arr[start],arr[end]);
        //step2
        start++;
        //step4
        end--;
    }
    //printing array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}




//reverse an array.


// //for odd number of elements
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={10,20,30,40,50,60,70};
//     int size=7;

//     int start=0;
//     int end=size-1;

//     while(start<=end){
//         //step 1 swap
//         swap(arr[start],arr[end]);
//         //step2
//         start++;
//         //step4
//         end--;
//     }
//     //printing array
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }


//Homework : Implement swap function by yourself, it has 3 ways. ,  +-, xor, temp variable.