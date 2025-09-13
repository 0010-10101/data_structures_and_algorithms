//Program to find unique element 



//array->{1,2,4,2,1,3,6,5,5,6,4};
// in above case unique element is 3.
//use xor operator.
// xor -> Dono elements same ho toh result false hota hai for 0,0 = 0; 1,1 =0
#include<iostream>
#include<vector>
using namespace std;
int findUniqueElement(vector<int> arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements"<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int uniqueElement = findUniqueElement(arr);
    cout<<"Unique element is:"<<uniqueElement<<endl;
}
