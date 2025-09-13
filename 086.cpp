// Leetcode 
// 5. Longest Palindromic Substring.

// class Solution {
//     public:
//         // string& s matlab by reference lena, bcoz - direct value use hoti hai, unlike
//         // pass by value jisme pehle copy create hoti hai., pass by reference se time comp. 
//         //better hoti hai.
//         bool isPalindrome(string& s, int start, int end){           
//             while(start<end){
//                 if(s[start] != s[end]){
//                     return false;
//                 }
//                 start++;
//                 end--;
//             }
//             return true;
//         }
//         string longestPalindrome(string s) {
//             string ans = "";    //string s banayi, usko null se initialize kiya.
//             //sare substring nikalo.
//             for(int i=0;i<s.size();i++){
//                 for(int j=i;j<s.size();j++){
    
//                     //isme puri string, i - start, j - end
//                     if(isPalindrome(s,i,j)){        
    
//                         //substr ko (start,length) chahiye, 
//                         string t = s.substr(i, j-i+1);  
//                         ans = t.size() > ans.size() ? t : ans; 
//                     }
//                 }
//             }
//             return ans;
//         }
//     };