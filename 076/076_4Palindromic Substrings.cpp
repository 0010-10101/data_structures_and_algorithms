//Leetcode 647 Palindromic Substrings



// class Solution {
//     public:
//         int expandAroundIndex(string s, int left, int right){
//             int count = 0;
//             //jab tak match karega, tak tak count increment kardo and i piche & j aage kr do
//             while(left>=0 && right<s.length() && s[left]==s[right]){
//                 count++;
//                 left--;
//                 right++;
//             }
//             return count;
//         }
//         int countSubstrings(string s) {
//             int totalcount = 0;      //count banaya taaki store kr sake
//             int n = s.length();
//             for(int center=0;center<n;center++){
//                 //odd case
//                 int oddKaAns = expandAroundIndex(s,center,center);
//                 totalcount = totalcount + oddKaAns;
//                 //even case
//                 int evenKaAns = expandAroundIndex(s,center,center+1);
//                 totalcount = totalcount + evenKaAns;
//             }
//             return totalcount;
//         }
//     };