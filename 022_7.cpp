// //write a functon of sutdent and grade problem.
// #include<iostream>
// using namespace std;
// char getGrade(int marks){
//     if(marks>=90 && marks<=100){
//         return 'A';
//     }
//     else if(marks>=80){
//         return 'B';
//     }
//     else if(marks>=60){
//         return 'C';
//     }
//     else if(marks>=35){
//         return 'D';
//     }
//     else{
//         return 'E';
//     }
// }
// int main(){
//     int marks;
//     cout<<"enter marks."<<endl;
//     cin>>marks;

//     char finalGrade = getGrade(marks);
//     cout<<"Final grade is : "<<finalGrade<<endl;
//     return 0;
// }








//write a functon of sutdent and grade problem using switch case;
#include<iostream>
using namespace std;
char getGrade(int marks){
    //assuming marks is between 0 to 100.
    switch(marks/10){
        case 10 :
        return 'A';
        break;

        case 9 :
        return 'A';
        break;

        case 8 :
        return 'B';
        break;

        case 7 :
        return 'C';
        break;

        case 6 :
        return 'D';
        break;

        default :
        return 'E';
    }
}
int main(){
    // int marks;
    // cout<<"enter marks."<<endl;
    // cin>>marks;

    for(int i=0;i<=100;i++){
        char ans = getGrade(i);
        cout<<"Grade for marks: "<<i<<" is "<<ans <<endl;
    }

    // char finalGrade = getGrade(marks);
    // cout<<"Final grade is : "<<finalGrade<<endl;
    return 0;
}