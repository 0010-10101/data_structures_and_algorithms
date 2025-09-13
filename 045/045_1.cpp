//vectors.
/*
How to declare a vector: vector<int> arr;
default size of vector : 0

How to initialize : 
vector<int> arr(10,20,30);
vector<int> arr(10,-1);

int n;
cin>>n;
vector<int> arr(n);
//runtime pe input de rhe uspe vector create kr skte ho kyuki vector dynamic array hai , where as simple arrays mai runtime per input nhi le skte.

vector ke andar element insert krna hai toh push_back use kro
arr.push_back(4);
arr.push_back(5);

remove krna hai.
arr.pop_back(4); 
is se kya hoga, at the end jo array mai element hoga woh remove ho jayega.

How to check size of vector.
arr.size();

How to check whether the vector array is empty or not. :-
arr.empty();
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // //creating vector.
    // vector<int> arr;
    // int ans= (sizeof(arr)/sizeof(int));
    // cout<<ans<<endl;


    // //size shows kitne elements stored kiye hue hai vector mai
    // cout<<arr.size();
    // cout<<endl;

    // //capacity shows kitne elements total store kr skte hai vector mai
    // cout<<arr.capacity();
    // return 0;


    // vector<bool> brr;
    // int ans2 = (sizeof(brr)/sizeof(bool));
    // cout<<ans2<<endl;

    // vector<int> arr;

    // arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(3);

    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }    


    // cout <<endl;
    // //to remove or delete.
    // arr.pop_back();

    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
    // int n;
    // cout<<"Enter the value of n: "<<endl;
    // cin>>n;

    // vector<int> array_3(n, -101);
    // for(int i=0;i<array_3.size();i++){
    //     cout<<array_3[i]<<" ";
    // }

    // // cout<<array_3.capacity();
    // vector<int> crr{10,20,30,40,50};
    // for(int i=0;i<crr.size();i++){
    //     cout<<crr[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"Vector crr is empty or not "<<crr.empty()<<endl;
    


    cout<<"----------------------------------"<<endl;


    vector<int> drr;
    cout<<"Vector drr is empty or not " << drr.empty()<<endl;
    return 0;
}