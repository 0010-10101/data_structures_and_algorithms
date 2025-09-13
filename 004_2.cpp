#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter the marks : " << endl;
    cin >> marks;
    if(marks>100){
        cout<<"Invalid Input.";
    }
    else if(marks>=90){
        cout<<"A grade.";
    }
    else if( marks>=80){
        cout<<"B grade.";
    }
    else if( marks >=60){
        cout<<"C grade.";
    }
    else if( marks >=40){
        cout<< "D grade.";
    }
    else{
        cout<<"E grade.";
    }
}