//union of two arrays.
// here assuming no duplicates are present.
#include<iostream>
#include<vector>

using namespace std;
int main(){
    int arr[]={1,3,5,7,9};
    int sizeofa = 5;
    int brr[]={2,4,6,8};
    int sizeofb = 4;
    vector<int> totalarray;

    //pushing all elements of the vetor arr;
    for(int i=0;i<sizeofa;i++){
        totalarray.push_back(arr[i]);
    }

    //pushing all the elemtns of the vector brr;
    for(int i=0;i<sizeofb;i++){
        totalarray.push_back(brr[i]);
    }


    //printing answer.
    cout<<"Printing the final array."<<endl;
    for(int i=0;i<totalarray.size();i++){
        
        cout<<totalarray[i]<<" ";
    }
}
