// //Linear search in an array.
// //Using Function.
// #include<iostream>
// using namespace std;
// bool find(int arr[], int size, int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }

//     //not present case.
//     return false;
// }
// int main(){
//     int arr[5]={2,4,6,8,10};
//     int size = 5;

//     int key;
//     cout<<"Enter the element to be searched. "<<endl;
//     cin>>key;

//     if(find(arr, size , key)){
//         cout<<"Element found."<<endl;
//     }
//     else{
//         cout<<"Element not found."<<endl;
//     }   
// }





//WIthout using function.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size = 8;
    int key = 3;
    int flag = 0;
    //linear search
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            flag=1;
        }
    }
    if(flag){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found."<<endl;
    }
    return 0;
}


