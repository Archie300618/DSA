class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>ump;
        for(int i=0;i<s.length();i++){
            ump[s[i]]++;
        }
        int freq=ump.begin()->second;
        for(auto it:ump){
            if(it.second!=freq){
                return false;
            }
        }
        return true;
    }
};