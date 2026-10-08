class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size());
        int leftprod=1;
        int rightprod=1;
        for(int i=0;i<nums.size();i++){
            ans[i]=leftprod;
            leftprod*=nums[i]; 
        }
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]*=rightprod;
            rightprod*=nums[i];
        }
        return ans;
    }
};