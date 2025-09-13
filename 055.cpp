// //Factorial of a number.



//small question inside the video 
//Code by lakshya bhaiya 
// https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-two-arrays2408/0

// class Solution {
//   public:
//     string calc_Sum(int *a, int n, int *b,   int m) {
//         // Complete the function
//         int carry = 0;
//         string ans;
//         int i=n-1;
//         int j=m-1;
        
//         while(i>=0 && j>=0){
//             int x = a[i]+ b[j] + carry;
//             int digit = x % 10;
//             ans.push_back(digit + '0');
//             carry = x/10;
//             i--,j--;
//         }
//         while(i>=0){
//             int x= a[i] + 0 + carry;
//             int digit = x%10;
//             ans.push_back(digit + '0');
//             carry = x/10;
//             i--;
//         }
        
//         while(j>=0){
//             int x = 0 + b[j] + carry;
//             int digt = x%10;
//             ans.push_back(digit + '0');
//             carry = x/10;
//             j--;
//         }
//         if(carry){
//             ans.push_back(carry + '0');
//         }
//         while(ans[ans.size()-1]== '0'){
//             ans.pop_back();
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };




// https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-two-arrays2408/0
// Geeks for geeks , small question inside the 055 video 
// correct answer.
//answer taken from comment section.
// class Solution {
//   public:
//     string calc_Sum(vector<int>& arr1, vector<int>& arr2) {
//         int i = arr1.size() - 1;
//         int j = arr2.size() - 1;
//         int carry = 0;
//         string ans;
//         while(i >= 0 || j >= 0 || carry) {
//             int sum = 0;
//             if(i >= 0) {
//                 sum += arr1[i];
//                 i--;
//             }
//             if(j >= 0) {
//                 sum += arr2[j];
//                 j--;
//             }
            
//             sum += carry;
//             carry = sum / 10;
//             int digit = sum % 10;
//             ans.push_back(digit + '0');
//         }
        
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };


