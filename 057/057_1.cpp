// /*

// mid = start + ( end - start ) /2

// */

// #include<iostream>
// using namespace std;
// int binarySearchfunction(int arr[], int size , int target){
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end-start) / 2;
//     while(start <= end){
//         int element = arr[mid];

//         if(element == target){
//             return mid;
//         }

//         else if(target < element){
//             //search in left side
//             end = mid - 1;
//         }
//         else {
//             //search in right side 
//             start = mid + 1;
//         }

//         int mid = start + (end-start) / 2;
//     }
//     return -1;
// }
// int main(){

//     int arr[]= {2,4,6,8,10,12,16};
//     int size = 7;
//     int target = 8;
//     int indexOfTarget = binarySearchfunction(arr,size,target);
//     if(indexOfTarget == -1){
//         cout<<"Target not found" << endl;
//     }
//     else{
//         cout<<"Target found at : "<<indexOfTarget<<" Index"<<endl;
//     }
//     return 0;
// }




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v{1,2,3,4,5,6,7,8};
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = 7;
    if(binary_search (arr, arr + size, 7)) {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found" <<endl;
    }

    return 0;
}