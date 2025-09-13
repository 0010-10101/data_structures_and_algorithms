// Leetcode. 
// 767 Reorganise Strings.

//Firse Question ko karo.... difficult hai. level easy but concept very difficult.



// class Solution {
//     public:
//         string reorganizeString(string s) {
//             int hash[26] = {0};     // space bacha rahe hai.
//             //step 1 count hash.
//             for(int i=0;i<s.size();i++){
//                 hash[s[i]-'a']++;
//             }                   //T.C : O(n)
    
//             //step2- find most occurent / frequent character.
//             char max_freq_char;            //most_frequent_char banaya taki usko store kr sake
//             int max_freq = INT_MIN;             // uski frequency store krne ke liye ye banaya max_freq, int mai store hogi
//             for(int i=0;i<26;i++){              // Pura map pe chalayenge.
//                 if(hash[i] > max_freq){
//                     max_freq = hash[i];
//                     max_freq_char = i + 'a';
//                 }
//             }                       //T.C : O(26) , constant time baar chalega.
    
    
//             int index = 0;          //ispe place karna shuru kar denge.
//             while(max_freq > 0 && index < s.size()){
//                 s[index] =  max_freq_char;
//                 max_freq --;
//                 index += 2;     //kyuki do index chod ke place kr rhe te.
//             }                   //T.C : jump krte krte chal rhe -> O(n/2) ie -> O(n)
    
//             //below if , exit condition hai.
//             if(max_freq !=0 ){       // saare 'a' place nahi ho paye in case of ex.2
//                 return "";
//             }
    
//             hash[max_freq_char - 'a'] = 0;
    
//             //placing rest of the characters.
//             for(int i=0;i<26;i++){
//                 while(hash[i]>0){           // jabtak i th character ka count 0 nahi ho jata tab tak
//                     index = index >= s.size() ? 1 : index; // agar index bada hai s.size() se toh 1 krdo else index rehne do.
//                     s[index] = i + 'a';     //i zero indexed hai. toh usme mai 'a' jo 97 hai add kro, tabhi char milega.
//                     hash[i]--;      // ek character place ho jaye toh uski frequency -- kr do, warna baar baar place hoga.
//                     index += 2;
//                 }
//             }                       //T.C : O(26*N) -> ignoring 26 so , T.C: O(n)
//             return s;
//         }
//     };