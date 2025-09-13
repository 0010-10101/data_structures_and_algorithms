//Creating a custom comparator inside the built in sort function.

// Also learning a little bit of hashmap.

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>

using namespace std;

bool compare(int a, int b){
    cout<<"First Number is : "<<a;
    cout<<" Second Number is: "<<b<<endl <<endl;
    return a>b;
}
bool customComparator(char first, char second){
    return first > second ;
}
int main(){
    // string s = "sahil";
    // sort(s.begin(),s.end(),customComparator);
    // vector<int> v{5,3,1,2,4};
    // sort(v.begin(),v.end(),compare);
    // for(auto i:v){
    //     cout<<i<<" ";

    // }
    // cout<<endl;
    // cout<<s<<endl;


    //creating a map data structure.
    map<int, char> meraMap;
    meraMap[0]='a';
    meraMap[1]='b';
    meraMap[25]= 'z';

    cout<<"Your answer is: "<<meraMap[1]<<endl;
    cout<<"Your answer is: "<<meraMap[25]<<endl;
    return 0;
}