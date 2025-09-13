//Leetcode submitted Solution


// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {

//         //Method 1 
//         // sort(nums.begin(),nums.end());

//         // for(int i=0;i<nums.size()-1;i++){
//         //     if(nums[i]==nums[i+1]){
//         //         return nums[i];
//         //     }
//         // }
//         // return -1;


//         // //Method 2
//         // //Visited Solution
//         // int ans = -1;
//         // for(int i=0;i<nums.size();i++){
//         //     int index = abs(nums[i]);

//         //     //already visited
//         //     if(nums[index]<0){
//         //         ans = index;
//         //         break;
//         //     }
//         //     //marking visited.
//         //     nums[index] *= -1;

//         // }
//         // return ans;



//         //Method3
//         //Name of this method : it can be called as positioning method.
//         while(nums[0] != nums[nums[0]]){
//             swap(nums[0],nums[nums[0]]);
//         }
//         return nums[0];
//     }
// };

