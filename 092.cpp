// Largest Number : 

// Leetcode 179




// class Solution {
//     public:
    
//         static bool mycomp(string a, string b){
//             string t1=a+b;
//             string t2=b+a;
//             return t1 > t2; //ye line bolti hai: agar t1 bada ho toh a ko pehle rakhenge, agar 
//             //t1 bada nhi hai toh false return karega ie t2 bada hai matlab b pehle rkho
//         }
    
//         string largestNumber(vector<int>& nums) {
//             vector<string> snums; //string mai convert kro, ans string mai chahiye.
//             for(auto n:nums){
    
//                 //har ek number ko string mai convert kr diya
//                 snums.push_back(to_string(n));      //to_string is a stl function in C++
//             }
    
//             sort(snums.begin(),snums.end(), mycomp);
//             if(snums[0]== "0") return "0";
//             //read karne ke liye.
//             string ans = "";
//             for(auto str:snums){
//                 ans+=str;
//             }
//             return ans;
//         }
//     };