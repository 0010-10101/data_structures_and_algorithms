//generic code
// hollow rectangle
#include<iostream>
using namespace std;
int main(){
    int rowCount,colCount;
    cin>>rowCount;
    cin>>colCount;
    for(int row=0;row<rowCount;row=row+1){
        if(row==0 || row==rowCount-1){
            for(int col=0;col<colCount;col=col+1){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for(int i=0;i<colCount-2;i++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
}































//non-generic code
//hollow rectangle
// #include<iostream>
// using namespace std;
// int main(){
//     for(int row=0;row<3;row=row+1){
//         if(row==0 || row==2){
//             for(int col=0;col<5;col=col+1){
//                 cout<<"*";
//             }
//         }
//         else{
//             cout<<"*";
//             for(int i=0;i<3;i++){
//                 cout<<" ";
//             }
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }