// //Creating a string.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<string.h>
// using namespace std;
// int main(){
//     //creating a string str.
//     string str;

//     //taking input.
//     cout<<"Enter the values to be taken as input" <<endl;
//     getline(cin,str);

//     //output
//     cout<<"Printing the values as output."<<endl;
//     cout<<str;
    
//     return 0;
// }

/*---------------------------------------------------------*/


#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
bool compareString(string a, string b){     // TimeComplexity : O(n)
    if(a.length() != b.length()){
        return false;
    }
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]){         // yaha sirf ek index i se kaam chala rahe hai ? kyuki dono string ke same index ko check kiya ja rha hai
            return false;
        }
    }
    return true;
}
int main(){
    string str;
    getline(cin,str);

    cout<<str<<endl;
    cout<<"Length: "<<str.length()<<endl;               //calculate length of string
    cout<<"Is string empty: "<< str.empty()<<endl;      // check is string is empty or not.
    str.push_back('A'); cout<<str;                      //add element in the last.
    cout<<endl;
    str.pop_back(); cout<<str<<endl;                    //remove element from the last.

    cout<<str.substr(0,7)<<endl;        //to get substring(start kaha se hoga, x length ki string la ke do)
    cout<<str<<endl;

    string a = "Diptika";
    string b = "Diptika";
    if(a.compare(b)==0){            //ye function case sensitive hai.
        cout<<"a and b are exactly same strings."<<endl;
    }
    else{
        cout<<"a and b are not exactly same strings."<<endl;
    }

    string x = "abcd";
    string y = "dcba";

    cout<<x.compare(y)<<endl;


    return 0;
}


