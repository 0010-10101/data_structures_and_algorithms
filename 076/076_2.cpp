//Leetcode 
//Remove all occurences of a substring.

// class Solution {
//     public:
//         string removeOccurrences(string s, string part) {
//             int pos = s.find(part);
    
//             // jabtak mujhe valid string mil rhi hai, jabtak valid index mil raha hai
//             while(pos != string::npos){             
                
//                 //part ko erase karenge(part ka starting end pos hai, length of string we want to erase.)
//                 s.erase(pos,part.length());      
    
//                 pos = s.find(part);         //looping variable hai toh dubara update kar diya.
//             }
//             return s;
//         }
//     };

