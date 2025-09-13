// Submit this solution on EKO SPOJ official website in gcc ( 8.3).


//EKO SPOJ Question
// Wood cutting question.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossibleSolution(vector<long long int> trees, long long int m, long long int mid){
    
    //for below : koi mid jo nikala hai humne, kya us se mujhe kam se kam M metres ki height ke wood mil payegi.
    //variable initialize karenge kitni wood collect kari hai.
    long long int woodCollected = 0;

    for(long long int i=0;i<trees.size();i++){
        if(trees[i]>mid){
            woodCollected += trees[i]-mid;
        }
    }
    return woodCollected >= m;      // agar woodCollected >= m hai toh true return hoga, agar nhi hai toh false return hoga.
}
long long int maxSawBladeHeight(vector<long long int> trees, long long int m){
    long long int start=0, end, ans = -1;

    //below stl use kiya to find end.
    // end kya tha? sabse maximum height ka tree kya hai?
    end = *max_element(trees.begin(),trees.end());
    
    while(start<=end){
        long long int mid = start + (end-start)/2;
        if(isPossibleSolution(trees,m,mid)){
            ans = mid ;         // how to say in english : mid ko answer mai store kr lete hai.
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}
int main(){
    long long int n, m;
    cin>> n >> m;
    // n : number of trees, m : kitna metres wood chahiye.
    vector<long long int> trees;
    while(n--){
        long long int height;
        cin>>height;
        trees.push_back(height);
    }
    cout<< maxSawBladeHeight(trees, m)<<endl;
}