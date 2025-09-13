//Leetcode 1047 Remove all adjacent duplicates in a string.

// class Solution {
//     public:
//         string removeDuplicates(string s) {
//             string ans = "";
//             int i=0;
//             while(i<s.length()){            // jabtak i less than hai s.length() ke loop chalao
//                 if(ans.length()>0){         // ans ki length greater than 0 matlab, string non-empty hai.
//                     if(ans[ans.length()-1]== s[i]){     // ye dono equal hai toh last element ko pop karo
//                     ans.pop_back();
//                     }
//                     else{                   // equal nahi hai toh element ko push karo.
//                         ans.push_back(s[i]); 
//                     }
//                 }
//                 else{
//                     ans.push_back(s[i]);
//                 }
//                 i++;
//             }    
//             return ans;
//         }
//     };