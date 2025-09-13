//given number is even or odd 
// #include<iostream>
// using namespace std;
// bool checkEven(int n){
//     if(n%2==0){
//         return true;
//     }
//     else{
//         return false; 
//     }
// }
// int main(){
//     int n;cout<<"Enter the value of n:"<<endl; cin >> n;
//     bool isEven = checkEven(n);
//     if(isEven){
//         cout<<"Given number " <<n<<" is Even"<<endl;
//     }
//     else{
//         cout<<"Given number " << n <<"is Odd."<<endl;
//     }
//     return 0;
// }



//another solution using bitwise method
#include<iostream>
using namespace std;
bool checkEven(int n){
    if((n&1)== 0){
        return true;
    }
    else{
        return false; 
    }
}
int main(){
    int n;cout<<"Enter the value of n:"<<endl; cin >> n;
    bool isEven = checkEven(n);
    if(isEven){
        cout<<"Given number " <<n<<" is Even"<<endl;
    }
    else{
        cout<<"Given number " << n <<"is Odd."<<endl;
    }
    return 0;
}