// //Code from Love Babbar 
// //By lakshya chaudhary.
// //Question : Common Elements -> this is shown on Lakshya's screen
// //common in 3 sorted arrays is shown on gfg for latest version.

// class Solution {
//   public:
//     // Function to find common elements in three arrays.
//     vector<int> commonElements(int A[],int B[], int C[], int n1, int n2, int n3) {
//         // Code Here
//         vector<int> ans;
//         int i,j,k;
//         i=j=k=0;
//         while(i<n1 && j<n2 && k<n3){
//             if(A[i]==B[j]==C[k]){
//                 ans.push_back(A[i]);
//                 i++;
//                 j++;
//                 k++;
//             }
//             else if(A[i]<B[j]){
//                 i++;
//             }
//             else if(B[j]<C[k]){
//                 j++;
//             }
//             else{
//                 k++;
//             }
//         }
//         for(auto i: st){
//             ans.push_back(i);
//         }
//         return ans;
//     }
// };




/*-----------------------------------------------------------------------------------------------------*/



/*

//Random Solution from comments from GFG .

//Question link : 
https://www.geeksforgeeks.org/problems/common-elements1132/1


easy C++ :

-> Assign arr1 values to a set(s1) same as arr2 & arr3 to set 2 & 3(to avoid duplactes in same array).

-> insert s1,s2,s3 into a vector.

-> use map to count vector elements.

-> for any element if its frequency is 3 then add its corresponding value to new vector.

-> after this if resultant vector is empty we return -1 else return vector.

 

vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) 
    {
        set<int> s1(arr1.begin(),arr1.end());
        vector<int> v1(s1.begin(),s1.end());
        
        set<int> s2(arr2.begin(),arr2.end());
        vector<int> v2(s2.begin(),s2.end());
        
        set<int> s3(arr3.begin(),arr3.end());
        vector<int> v3(s3.begin(),s3.end());
        
        vector<int> r;
        r.insert(r.end(),v1.begin(),v1.end());
        r.insert(r.end(),v2.begin(),v2.end());
        r.insert(r.end(),v3.begin(),v3.end());
        
        
        map<int,int> mpp;
        
        vector<int> v;
        
        for(int i=0;i<r.size();i++)
        {
            mpp[r[i]]++;
        }
        
        for(auto it : mpp)
        {
            if(it.second == 3)
            {
                v.push_back(it.first);
            }
        }
        if(v.empty())
        {
            v.push_back(-1);
            return v;
        }
        return v;
    }


*/



/*--------------------------------------------------------------------------------------------*/


/*
//Question link : 
https://www.geeksforgeeks.org/problems/common-elements5420/1

EASY C++ SOLUTION
   vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        // Your code here
        vector<int>v;
        unordered_map<int,int>mp,mp1;
        for(int i=0;i<v1.size();i++)
        {
            mp[v1[i]]++;
        }
        for(int i=0;i<v2.size();i++)
        {
            mp1[v2[i]]++;
        }
        for(int i=0;i<v2.size();i++)
        {
           int key=v2[i];
           if(mp.find(key)!=mp.end())
           {
               int count=min(mp[key],mp1[key]);
               for(int j=0;j<count;j++)
               v.push_back(key);
               
           }
           mp.erase(key);
        }
        sort(v.begin(),v.end());
        return v;
    }



*/