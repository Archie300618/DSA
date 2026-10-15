class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>ump;
        for(int i=0;i<nums.size();i++){
            if(ump[nums[i]]==k){
                continue;
            }
            if(ump[nums[i]]<k){
                ans.push_back(nums[i]);
                ump[nums[i]]++;
            }
       }
       return ans;
    }
};