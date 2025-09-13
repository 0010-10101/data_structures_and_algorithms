//Searching and Sorting Class 1 - HD.

//Binary Search 

// #include<iostream>
// using namespace std;
// int binarySearch(int arr[], int size, int target){
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end-start)/2;    
//     //Note : Ye wala formula use kro koi dusra nhi, reason int overflow ho jayega rest of the formulas mai
    
//     while(start <= end){             // for aisa case jaha single element bacha ho sirf
//         int element = arr[mid];

//         if(element == target){          // Element found, then return index.
//             return mid;
//         }
//         else if(target<element){
//             //search in left
//             end = mid - 1;
//         }
//         else{
//             //search in right
//             start = mid + 1;
//         }
//         mid= start + (end-start)/2;
//     }
//     //element not found.
//     return -1;
// }
// int main(){
//     int arr[] = {2,4,6,8,10,12,16};
//     int size = 7;
//     int target = 19;

//     int indexOfTarget = binarySearch(arr, size, target);
//     if(indexOfTarget == -1){
//         cout<<"Target not found"<<endl;
//     }
//     else{
//         cout<<"Target found at "<<indexOfTarget<<" index"<<endl;
//     }
//     return 0;
// }





// //Binary Search Function from STL for Vector
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v{1,2,3,4,5,6};
//     if(binary_search(v.begin(),v.end(),4)){
//         cout<<"Element found in the index."<<endl;
//     }
//     else{
//         cout<<"Not found."<<endl;
//     }

//     return 0;
// }







//Binary Search Function from STL for Arrays
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int size = 6;
    if(binary_search(arr,arr+size,4)){
        cout<<"Element found in the index."<<endl;
    }
    else{
        cout<<"Not found."<<endl;
    }

    return 0;
}