//Leetcode
//14. Longest common prefix.


// class Solution {
//     public:
//         string longestCommonPrefix(vector<string>& strs) {
//             string ans;
//             int i=0;                // iterate karega har string ke ith character pe.
//             while(true){            // infinite loop chala rhe hai.
//                 // writing code in new & different way.
//                 //infinite loop ko break kr do certain condition pe.
//                 char curr_ch = 0;           // zero se initialize kr diya.
//                 for( auto str : strs){
//                     if(i>=str.size()){
//                         // agar out of bound hai.
//                         curr_ch = 0;
//                         break;
//                     }
//                     //jo vector diya hua hai string ka uske andar 
//                     // for each loop se ham iterate krne ki koshish kr rhe hai.
//                     //str -> jo har ek index pe di hue hai woh string batayega.
    
    
//                     //just started
//                     if(curr_ch == 0){       // agar curr_ch uninitialized hai
//                         curr_ch = str[i];   // curr_ch ke andar 'f' aa jayega in case of ex. 1.
//                     }
//                     else if(str[i] != curr_ch){     // else if case mai kuch nhi krna hai toh != use kro
//                         curr_ch = 0;                // curr_ch ko zero put krke break kro.
//                         break;
//                     }
//                 }
//                 if(curr_ch == 0){
//                     break;
//                 }
//                 ans.push_back(curr_ch);
//                 i++; 
//             }
//             return ans;
//         }
//     };