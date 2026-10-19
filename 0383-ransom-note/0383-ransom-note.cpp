class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp1,mp2;
        for(char c1:ransomNote){
            mp1[c1]++;
        }
        for(char c2:magazine){
            mp2[c2]++;
        }
        for(auto it:mp1){
            if(mp2.find(it.first)==mp2.end() || it.second>mp2[it.first]){
                return false;
            }
        }
        return true;
    }
};