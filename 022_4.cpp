//function to add 2 numbers.
#include<iostream>
using namespace std;


//function declaration 
int addNum(int x, int y);

int main(){
    int a;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    int b;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    int sum = addNum(a,b);
    cout<<"Addition result is:"<<sum << endl;
}


//function declaration + definition.
int addNum(int x, int y)
{
    int result = x+y;
    return result;
}
