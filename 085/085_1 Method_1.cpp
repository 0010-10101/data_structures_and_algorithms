// Leetcode 
//49. Group anagrams 



// Method 1 using map.

// class Solution {
//     public:
//         vector<vector<string>> groupAnagrams(vector<string>& strs) {
//             map<string, vector<string> > mp;  //key-string, value-vector<string>, map ka name- mp hai.
//             for(auto str: strs){    //jitni bhi strings hai unpe iterate karenge.
//                 string s = str;     // string le rahe s naam ki
//                 sort(s.begin(),s.end()); // s ko sort karna hai
    
//                 //map mai entry banayenge
//                 mp[s].push_back(str);      //key toh ek string hai, but value ek vector hai is case mai,
//                 // s push mat krna, str push karo.
//             }
//             vector<vector<string>>ans;          // return karna hai vector<vector<string>> mai, ans -> name hai. 
//             for(auto it = mp.begin();it != mp.end(); it++){
    
//                 //map ki key-value pairs mai se key -> first hoti hai, value-> second hoti hai. 
//                 ans.push_back(it->second);          // value return kr rhe hai.
//             }
//             return ans;
//         }
//     };
    

