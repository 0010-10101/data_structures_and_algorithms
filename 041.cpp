//set Kth bit Geeks for Geeks

/*

https://www.geeksforgeeks.org/problems/set-kth-bit3724/1

*/

// class Solution {
// public:
//     int reverse(int x) {
//        int answer = 0, rem = 0;
//        bool isNegative = false;
//        if(x<=INT_MIN){
//         return 0;
//        }
//        if(x<0){
//         isNegative = true;
//         x = -x;
//        }
//        while(x>0){
//         if(answer > INT_MAX / 10){
//             return 0;
//         }
//         int digit = x % 10;
//         answer = answer * 10 + digit;
//         x= x/10;
//        }
//        return isNegative ? -answer : answer;
//     }
// };