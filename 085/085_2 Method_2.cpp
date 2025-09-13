//Leetcode 
// 49. Group Anagrams.

// class Solution {
//     public:
//         // Method 2 by Lakshya.
//         std:: array<int, 256> hash(string s){
//             std::array<int, 256> hash = {0};
//             for(int i=0;i<s.size();i++){
//                 hash[s[i]]++;
//             }
//             return hash;
//         }
//         vector<vector<string>> groupAnagrams(vector<string>& strs) {
//             map<std:: array<int, 256>, vector<string> >mp;      //stl use kiya hai.
    
//             //next str ke corresponding hash banana hai, toh hash createkrne ke liye function likho (upar likha hai.)
    
//             for(auto str: strs){
//                 mp[hash(str)].push_back(str);
//             }
    
//             vector<vector<string>>ans;
//             for(auto it=mp.begin();it !=mp.end();it++){
//                 ans.push_back(it->second);
//             }
//             return ans;
//         }
//     };
    
//     // TC : O(nk), SC : O(nk).