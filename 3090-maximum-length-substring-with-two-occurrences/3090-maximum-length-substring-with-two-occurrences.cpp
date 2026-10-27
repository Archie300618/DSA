class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>mp;
        int maxlen=0;
        int left=0;
        for(int right=0;right<s.length();right++){
            mp[s[right]]++;
            while(mp[s[right]]>2){
                mp[s[left]]--;
                left++;
            }
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};