class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans1;
        vector<int>ans2;
        unordered_set<int>st1(nums1.begin(),nums1.end());
        unordered_set<int>st2(nums2.begin(),nums2.end());
        for(int x:st1){
            if(st2.count(x)==0){
                ans1.push_back(x);
            }
        }
        for(int x:st2){
            if(st1.count(x)==0){
                ans2.push_back(x);
            }
        }
        return {ans1,ans2};
    }
};