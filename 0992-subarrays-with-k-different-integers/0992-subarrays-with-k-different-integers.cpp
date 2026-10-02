class Solution {
public:
    int countsubarray(vector<int>&nums,int limit){
        if(limit<0){
            return 0;
        }
        unordered_map<int,int>ump;
        int left=0;
        int cnt=0;
        for(int right=0;right<nums.size();right++){
            ump[nums[right]]++;
            while(ump.size()>limit){
                int val=nums[left];
                ump[val]--;
                if(ump[val]==0){
                    ump.erase(val);
                }
                left++;
            }
        cnt+=right-left+1;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        if(k<=0){
            return 0;
        }
        return countsubarray(nums,k)-countsubarray(nums,k-1);
    }
};