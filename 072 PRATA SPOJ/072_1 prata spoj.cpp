// prata spoj 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isPossibleSolution(vector<int>cooksRanks, int nP, int mid){
    int currP = 0;                  //initial cooked prata count.
    for(int i =0;i<cooksRanks.size();i++){
        int R = cooksRanks[i], j=1;         //j kyu liya , R ka multiple lete te dry run aur question mai bhi diya tha
        int timeTaken = 0;
        while(true){
            if(timeTaken + j * R <= mid){
                ++currP;
                timeTaken += j*R;
                ++j;
            }
            else{               //overshoot kar gaya.
                break;
            }
        }
        if(currP >= nP){
            return true;
        }
    }
    return false;
}
int minTimeToCompleteOrder(vector<int> cooksRanks, int nP){
    int start = 0;
    int highestRank = *max_element(cooksRanks.begin(),cooksRanks.end());
    int end = highestRank * ( nP * (nP + 1)/2);
    int ans = -1;

    while(start<=end){
        int mid= (start + end) >> 1;
        if(isPossibleSolution(cooksRanks, nP, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}
int main(){
    int T;          // No. of test cases
    cin>>T;
    while(T--){         // test case sare chalane hai.
        int nP, nC;         // nP : number of prata, nC : number of cooks. 
        cin>>nP>>nC;
        vector<int> cooksRanks;             // ranks store karenge 
        while(nC--){
            int R;                      // R for ranks.
            cin>>R;
            cooksRanks.push_back(R);        // current rank push kardiya.
        }
        cout<<minTimeToCompleteOrder(cooksRanks, nP)<<endl;
    }
    return 0;
}


/*

Giving inputs :
3
10
4 1 2 3 4
8
1 1
8
8 1 1 1 1 1 1 1 1



Output :

12
36
1

*/