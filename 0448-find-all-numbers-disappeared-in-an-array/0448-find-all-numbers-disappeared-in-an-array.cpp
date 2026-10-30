class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {\
    vector<int>ans;
        unordered_map<int,int>ump;
        for(int x:nums){
            ump[x]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(ump.find(i)==ump.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};