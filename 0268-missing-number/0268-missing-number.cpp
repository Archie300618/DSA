class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<bool>present(nums.size()+1,false);
        for(int i:nums){
            present[i]=true;
        }
        for(int i=0;i<=nums.size();i++){
            if(!present[i]){
                return i;
            }
        }
        return -1;
    }
};