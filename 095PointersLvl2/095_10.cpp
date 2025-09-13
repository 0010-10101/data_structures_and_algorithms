#include<iostream>
using namespace std;
void solve(int arr[]){
    cout<<"Inside the solve function. " << sizeof(arr) << endl;
    cout<<"arr : "<<arr<<endl;
    cout<<"&arr : " <<&arr<<endl;
    arr[0]=50;

}
int main(){
    int arr[10]={1,2,3,4};
    cout<<"Size inside the main function. " << sizeof(arr) << endl;
    cout<<"arr : "<<arr<<endl;
    cout<<"&arr : " <<&arr<<endl;

    //printing array inside the main function
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    cout<<"Now calling the solve function. " << endl;
    solve(arr);
    cout<<"Wapas Main function me aa gye hai. " <<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}