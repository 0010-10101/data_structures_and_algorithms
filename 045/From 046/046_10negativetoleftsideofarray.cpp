// Q48 from Video

//Move all negative numbers to left side of the array
// Using the dutch national algorithm.

#include<iostream>
using namespace std;
void moveAllNegativeToLeft(int*a,int n){
    //Dutch National Flag.
    int l=0, h=n-1;
    while(l<h){
        if(a[l]<0){
            l++;
        }
        else if(a[h]>0){
            h--;
        }
        else{//
            swap(a[l],a[h]);
        }
    }
}
int main(){
    int a[] = {-1,2,-3,4,-5,6,0,-5,-34,-7};
    int n = sizeof(a)/sizeof(int);
    //above line mai size of (a) total size dega -> 24, size of int ki value 4 hogi, 
    //24/4=6.

    moveAllNegativeToLeft(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}   


/*Output.


-1 -7 -3 -34 -5 -5 0 6 4 2 

*/