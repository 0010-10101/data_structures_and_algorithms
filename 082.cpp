//Leetcode 
// 345 Reverse vowels of string.




// class Solution {
//     public:
//         // ch captial aaye ya small aye, isko lower kr do using tolower function  
//         bool isVowel(char ch){
//             ch = tolower(ch);           
//             return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
//         }
//         string reverseVowels(string s) {
//             int l=0, h = s.size()-1;
    
//             while(l<h){
//                 if(isVowel(s[l]) && isVowel(s[h])){
//                     swap(s[l], s[h]);
//                     l++;
//                     h--;
//                 }
//                 else if(isVowel(s[l])==0){
//                     l++;
//                 }
//                 else{       //isVowel(s[h])==0          //vowel nahi hai. 
//                     h--;
//                 }
//             }
//             return s;
//         }
//     };