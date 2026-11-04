class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>ump;
        for(int x:nums){
            ump[x]++;
        }
        for(int i=0;i<nums.size();i++){
            if(ump[nums[i]]==1 && ump[nums[i]-1]==0 && ump[nums[i]+1]==0){
                ans.push_back(nums[i]);
            }
        }
        return ans;

    }
};