class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<bool>present(2001,false);
        for(int x:arr){
            present[x]=true;
        }
        int cnt=0;
        for(int i=1;i<present.size();i++){
            if(!present[i]){
                cnt++;
            }
            if(cnt==k){
                return i;
            }
        }
        return -1;
    }
};