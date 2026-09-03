class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ump;
        for(int i=0;i<nums.size();i++){
            int c=target-nums[i];
            if(ump.find(c)!=ump.end()){
                return {ump[c],i};
            }
            ump[nums[i]]=i;
        }
        return {};
    }
};