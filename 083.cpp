// Leetcode 
// 205 Isomorphic strings.





// class Solution {
//     public:
//         bool isIsomorphic(string s, string t) {
//             int hash[256] = {0};  //mapping rakhega each character of lang. s to lang. t.
//             bool istCharsMapped[256] = {0};     //stores if t[i] char already mapped with s[i].
//             for(int i=0;i<s.size();i++){
//                 //kya s[i] ke corresponding mapping available hai? -> nhi hai && istCharsMapped[t[i]] wo mapped na ho.
//                 if(hash[s[i]]==0 && istCharsMapped[t[i]]==0){   
//                     hash[s[i]] = t[i];  //toh ex.1 ke reference mai, e ke corresp. a kr denge.
//                     istCharsMapped[t[i]] = true;    //Ye line boli- t lang. ka a hai woh mapped hai, 1 put kar diya hai.
//                 }
//             }
    
//             for(int i=0;i<s.size();i++){    // s ka hash use krke , t mai convert krenge.
//                 if(char(hash[s[i]]) != t[i]){   // hash[s[i]] ko character mai convert kiya hai, kyuki t[i] ek char. deta hai
//                     return false;   // iska matlab isomorphic nhi hai
//                 }
//             }
//             return true;
//         }
//     };