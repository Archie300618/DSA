class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        int maxlen=0;
        int left=0;
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                cnt++;
            }
            if(cnt>k){
                if(nums[left]==0){
                    cnt--;
                }
                left++;
            }
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};