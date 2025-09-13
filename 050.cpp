//Missing Elements from array with duplicates.



// //Method 1.
// // Here we can treat the elements of the array as a Index.
// #include<iostream>
// #include<vector>
// using namespace std;
// void findMissing(int *a,int n){
//     //visited method 
//     for(int i=0;i<n;i++){
//         int index = abs(a[i]);
//         if(a[index-1]>0){
//             a[index-1] *= -1;
//         }
//     }
    

//     //  below loops shows all elements which are present in negative 
//     //values , and the missing ele. in positive value.
//     // for(int i=0;i<n;i++){
//     //     cout<<a[i]<<" ";
//     // }

//     for(int i=0;i<n;i++){
//         if(a[i]>0){
//             cout<<i+1<<" ";
//         }
//     }
// }
// int main(){
//     int n;
//     int a[]= {1,3,3,4,3};
//     n = sizeof(a)/sizeof(int);
//     findMissing(a,n);
//     return 0;
// }
// // T.c: O(n)
// // S.C : O(1)






//Method 2
//Sorting+ swapping 

#include<iostream>
using namespace std;
void findMissing(int *a, int n){
    int i=0;
    while(i<n){
        int index = a[i]-1;
        if(a[i] != a[index]){
            swap(a[i],a[index]);
        }
        else{
            ++i;
        }
    }
    
    
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;


    for(int i=0;i<n;i++){
        if(a[i] != i+1){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int n;
    int a[]={1,3,5,3,4};
    n = sizeof(a)/sizeof(int);
    findMissing(a,n);
    return 0;
}
//T.C : O(n) ; S.C : O(1)

 