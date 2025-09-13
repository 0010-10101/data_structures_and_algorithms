//Leetcode 539
// minimum time difference.

// class Solution {
//     public:
//         int findMinDifference(vector<string>& timePoints) {
//            //Step1: Convert time string into minutes integer value.
//            vector<int> minutes;
    
//            for(int i=0;i<timePoints.size();i++){
//                 string curr = timePoints[i];
    
//                 // hours nikalne hai.
//                 //hours jo hai, string ke starting ke 2 characters hai.
//                 //stoi use krte hai, string ko integer mai convert krne ke liye.
//                 int hours = stoi(curr.substr(0,2));          
//                 //substr(0,2) ka matlab hai, substring nikalo, 0 index se start kro, 2 points nikal lo
//                 int min = stoi(curr.substr(3,2));
    
//                 int totalMinutes = hours * 60 + min;
//                 minutes.push_back(totalMinutes);
//            }
//            //step2 : sort krdo.
//            sort(minutes.begin(),minutes.end());
    
//            //Step3 : difference nikalo and calculate minimum difference.
//            int mini = INT_MAX;
//            int n = minutes.size();
//            for(int i=0;i<n-1;i++){
//                 // i+1 use kiya, make sure upar n ki jagah n-1 use kiya 
//                 // ho nhi toh loop ke bahar nikal jayega.
//                 int diff = minutes[i+1] - minutes[i]; 
//                 mini = min(mini,diff);
//            }
//            //something missing for difference of (0,1439) is me difference 1 min ka ana chahiye 
//            //but difference 1439 aa rha hai.
//            int lastDiff = (minutes[0] +  1440) - minutes[n-1]; 
//            // ho sakta hai ye answer ho, ya na ho pata kaise lagega.
//            mini = min(mini,lastDiff);  
//            return mini;
//         }
//     };