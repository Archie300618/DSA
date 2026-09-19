class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
       int n=nums.size(); 
       unordered_map<int,int>ump; 
       int mid=nums[n/2]; 
       for(int i=0;i<n;i++){ 
        ump[nums[i]]++; } 
        for(auto it:ump){ 
            if(ump[mid]>1){ 
                return false; } } 
                return true;}
};