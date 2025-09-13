// //String to integer (atoi())
// // Leetcode 8


// class Solution {
//     public:
//         int myAtoi(string s) {
//             //num answer hoga, i iterate krega string pe, sign mai 1 positive bata rha hai.
//             int num = 0, i = 0, sign = 1;  
    
//             //ignoring leading white space.
//             while(s[i]==' '){
//                 i++;
//             }
    
//             //determine sign.
//             if(i<s.size() && (s[i]== '-' || s[i]=='+')){
//                 sign = s[i] == '+' ? 1 : -1;
//                 ++i;
//             }
    
//             //assume kr rhe + aur - mil gya, uske baad sab digits hone chahiye.
//             while(i<s.size() && isdigit(s[i])){     //isdigit helps in ignoring char after digit.
//                 if(num > INT_MAX / 10 || (num == INT_MAX/10 && s[i]>'7')){
//                     return sign == -1 ? INT_MIN : INT_MAX;
//                 }
//                 num = num * 10 + (s[i] - '0');
//                 ++i;
//             }
//             return num * sign ;
//         }
//     };