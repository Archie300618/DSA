class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>ump;
        for(int i=0;i<arr.size();i++){
            ump[arr[i]]++;
        }
        int ans=-1;
        for(int i=0;i<arr.size();i++){
            if(ump[arr[i]]==arr[i]){
                ans=max(ans,arr[i]);
            }
        }
        return ans;
    }
};