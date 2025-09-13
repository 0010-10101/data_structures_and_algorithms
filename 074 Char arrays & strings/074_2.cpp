//Character arrays and strings.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    char name[100];
    cin >> name;

    for(int i=0;i<6;i++){
        cout<<" index " << i <<" value:" <<name[i]<<endl;
    }
    int value = (int)name[6];
    cout<<"value is: "<<value<<endl;
    return 0;
}

//last mai ek null character \0 se store hota hai.

// null character shows string termination.
// null character ki ascii value 0 hoti hai.