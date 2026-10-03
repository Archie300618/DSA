class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) {
            return "";
        }
        int minlen=strs[0].length();
        for(int j=1;j<strs.size();j++){
            if(strs[j].length()<minlen){
                minlen=strs[j].length();
            }
        }
        string ans="";
        for(int i=0;i<minlen;i++){
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=strs[0][i]){
                    return ans;
                }
            }
        ans+=strs[0][i];}
        return ans;
    }
};