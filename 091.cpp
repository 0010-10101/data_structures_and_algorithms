//Zig zag conversion


// Leetcode 6


0
// class Solution {
//     public:
//         string convert(string s, int numRows) {
//             if(numRows == 1) return s;
    
//             //zigzag krne ke liye vector lenge, 3 strings
//             vector<string> zigzag(numRows);
    
//             int i = 0, row = 0; //i for iterating, row for 3 rows
    
//             bool direction = 1; //1-> Top to Bottom.
//             while(true){
//                 if(direction){
//                     while(row < numRows && i<s.size()){
//                         zigzag[row++].push_back(s[i++]);
//                     }
//                     row = numRows - 2;
//                 }
//                 else{
//                     while(row>=0 && i<s.size()){
//                         zigzag[row--].push_back(s[i++]);
//                     }
//                     row = 1;
//                 }
//                 if(i>= s.size()) break;
//                 direction = !direction;         //isse direction change hoti hai
//             }
    
//             //read karne ke liye
//             string ans = "";    //answer ke liye variable liya, 0 size ka string.
//             for(int i=0;i<zigzag.size();i++){
//                 //concatenate kr rhe hai.
//                 ans += zigzag[i];
//             }
//             return ans;
//         }
//     };

