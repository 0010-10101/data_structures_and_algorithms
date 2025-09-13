//Finding first and last occurence using algorithm
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v{1,3,3,3,3,4,4,4,4,4,6,7};

//     int target = 4;
    
//     auto answer1 = lower_bound( v.begin() , v.end(), target);
//     cout<<"answer1 is "<<answer1-v.begin() << endl;

//     return 0;
// }


/*-------------------------------*/

//Last occurence using algorithm

// check again code incorrect.
//refer website.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v{1,2,3,4,4,4,4,4,4,4,4,6,7,8,9};

    int target = 4;

    auto answer2 = upper_bound(v.begin(),v.end(), target);
    cout<<"answer2 is "<<answer2-v.end()<<endl;

    return 0;
}