// Leetcode 
// 917 Reverse on Letters.



// class Solution {
//     public:
//         string reverseOnlyLetters(string s) {
//             int l=0,h=s.size()-1;
//             while(l<h){         // l<=h bhi le sakte hai, but koi fayda nhi hai. ek hota toh swap karke
//                 if(isalpha(s[l]) && isalpha(s[h])){         
//                     // isalpha() ek c++ function hai to return characters
//                     swap(s[l],s[h]);
//                     l++;
//                     h--;
//                 }
//                 else if(!isalpha(s[l])){
//                     l++;
//                 }
//                 else{   
//                     // s[h] -> Non-alphabet.
//                     h--;
//                 }
//             }
//             return s;
//         }
//     };
    
//     //Time Complexity : O(n/2) + O(n/2) 
//     // Total Time Complexity : O(n)